//============================================================================
// Name        : ToDo CLI - Task Manager Source
// Author      : Ak0s
//============================================================================

#include "task_manager.hpp"

TaskManager::TaskManager() {
  this->tasks = NULL;
  this->task_counter = 0;
  this->read_task_list_from_file();
}

void TaskManager::print_usage() {
  cout << endl << "CLI ToDo application" << endl
               << "====================" << endl
               << "Command line arguments:" << endl
               << "=======================" << endl
               << "-l    Lists all the tasks" << endl
               << "-lhp  Lists all high priority tasks" << endl
               << "-lmp  Lists all medium priority tasks" << endl
               << "-llp  Lists all low priority tasks" << endl
               << "-ldo  Lists tasks in due order" << endl
               << "-a    Adds a new task" << endl
               << "-r    Removes a task" << endl
               << "-m    Move a task upper in the list" << endl
               << "-c    Checks a task as completed" << endl << endl;
}

void TaskManager::add_task() {
  int priority;
  string name_of_task, priority_level, due;
  cout << "Give the name of the new task: " << endl;
  cin >> name_of_task;
  cout << "Give the priority of the new task: " << endl;
  cout << "1 - High priority" << endl
       << "2 - Medium priority" << endl
       << "3 - Low priority" << endl;
  cin >> priority;

  switch (priority) {
    case 1:
      priority_level = "High";
      break;
    case 2:
      priority_level = "Medium";
      break;
    case 3:
      priority_level = "Low";
  }

  cout << "Give the due of the new task: " << endl;
  cin >> due;

  Task* new_task = new Task(name_of_task,priority_level,due,"_");
  add_task_to_task_manager(*new_task);
  write_task_list_to_file();
}

void TaskManager::add_task_to_task_manager(Task& task) {
  Task** temp = new Task*[task_counter + 1];
  if (tasks != NULL) {
    for (unsigned int i = 0; i < task_counter; i++) {
      temp[i] = tasks[i];
    }
  }
  temp[task_counter] = &task;
  delete[] tasks;
  tasks = temp;
  task_counter++;
}

string TaskManager::complete_task() {
  string name_of_task;
  cout << "Which task did you complete?" << endl;
  cin >> name_of_task;
  for (unsigned int i = 0; i < task_counter; i++) {
    if (tasks[i]->get_task() == name_of_task) {
      if (tasks[i]->get_status() != "X") {
        tasks[i]->set_status("X");
        write_task_list_to_file();
        PlaySound(TEXT("completed.wav"), NULL, SND_SYNC);
        return name_of_task + " is checked as completed!";
      }
      else {
        return name_of_task + " is already checked as completed!";
      }
    }
  }
  return "No such task! Please check your spelling!";
}

string TaskManager::remove_task() {
  string remove_task;
  cout << "Which task do you want to remove?" << endl;
  cin >> remove_task;

  for (unsigned int i = 0; i < task_counter; i++) {
    if (remove_task == tasks[i]->get_task()) {
      Task** temp = new Task*[task_counter - 1];
      if (tasks != NULL) {
        for (unsigned int j = 0; j < task_counter - 1; j++) {
          if (j < i) {
            temp[j] = tasks[j];
          }
          else {
            temp[j] = tasks[j + 1];
          }
        }
      }
      delete[] tasks;
      tasks = temp;
      --task_counter;
      write_task_list_to_file();
      return remove_task + " is removed!";
    }
  }
  return "No such task! Please check your spelling!";
}

string TaskManager::move_up_task() {
  string move_task;
  Task* temp = new Task;
  cout << "Which task do you want to move up?" << endl;
  cin >> move_task;

  if (tasks != NULL) {
    if (move_task != tasks[0]->get_task()) {
      for (unsigned int i = 0; i < task_counter; i++) {
        if (move_task == tasks[i]->get_task()) {
                temp = tasks[i];
                tasks[i] = tasks[i - 1];
                tasks[i - 1] = temp;
        }
      }
      write_task_list_to_file();
      return move_task + " moved up by one successfully!";
    }
    else {
      return move_task + " is already on the top!";
    }
  }
  return "One or both of the tasks are invalid! Please check your spelling!";
}


void TaskManager::print_task_list () {
  if (task_counter > 0) {
    for (unsigned int i = 0; i < task_counter; i++) {
      if (get_current_date() > tasks[i]->get_int_due()) {
        cout << i + 1 << " - [" << tasks[i]->get_status() << "] - Task: " << tasks[i]->get_task() << " | Due: " << tasks[i]->get_due() << " | OVERDUE | Priority: " << tasks[i]->get_priority() << endl;
      }
      else {
        cout << i + 1 << " - [" << tasks[i]->get_status() << "] - Task: " << tasks[i]->get_task() << " | Due: " << tasks[i]->get_due() << " | ONGOING | Priority: " << tasks[i]->get_priority() << endl;
      }
    }
  }
  else {
    cout << "There isn't any task for you! :)" << endl;
  }
}

void TaskManager::print_task_list_prioritized(string priority) {
  if (task_counter > 0) {
    for (unsigned int i = 0; i < task_counter; i++) {
      if (tasks[i]->get_priority() == priority) {
       cout << i + 1 << " - [" << tasks[i]->get_status() << "] - Task: " << tasks[i]->get_task() << " | Due: " << tasks[i]->get_due() << " | Priority: " << tasks[i]->get_priority() << endl;
      }
    }
  }
  else {
    cout << "There isn't any task for you! :)" << endl;
  }
}

void TaskManager::print_task_list_due_ordered() {
  if (tasks != NULL) {
    Task* temp = new Task;
    for (unsigned int i = 0; i < task_counter; i++) {
      for (unsigned int j = i + 1; j < task_counter; j++) {
        if (tasks[i]->get_int_due() > tasks[j]->get_int_due()) {
          temp = tasks[i];
          tasks[i] = tasks[j];
          tasks[j] = temp;
        }
      }
    }
    print_task_list();
  }
}

void TaskManager::string_date_to_int() {
  if (tasks != NULL) {
    string date[task_counter];
    for (unsigned int i = 0; i < task_counter; i++) {
      for (int j = 0; j < 4; j++) {
        date[i] += tasks[i]->get_due()[j];
      }
      for (int j = 5; j < 7; j++) {
        date[i] += tasks[i]->get_due()[j];
      }
      for (int j = 8; j < 10; j++) {
        date[i] += tasks[i]->get_due()[j];
      }
    }
    for (unsigned int i = 0; i < task_counter; i++) {
      tasks[i]->set_int_due(stoi(date[i]));
    }
  }
}

void TaskManager::read_task_list_from_file() {
  ifstream to_do_list("to_do_list.txt");
  string task, priority, due, status;
  while(to_do_list >> task >> priority >> due >> status) {
    Task* new_task = new Task(task, priority, due, status);
    add_task_to_task_manager(*new_task);
    string_date_to_int();
  }
  to_do_list.close();
}

void TaskManager::write_task_list_to_file() {
  ofstream to_do_list("to_do_list.txt");
  for (unsigned int i = 0; i < task_counter; i++) {
    to_do_list << tasks[i]->get_task() + " " + tasks[i]->get_priority() + " " + tasks[i]->get_due() + " " + tasks[i]->get_status() << endl;
  }
  to_do_list.close();
}

int TaskManager::get_current_date() {
  auto t = time(nullptr);
  auto tm = *localtime(&t);
  stringstream ss_date;
  ss_date << put_time(&tm, "%Y%m%d");
  return  stoi(ss_date.str());
}

TaskManager::~TaskManager() {
  delete[] tasks;
}
