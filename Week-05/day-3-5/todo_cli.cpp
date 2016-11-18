//============================================================================
// Name        : ToDo CLI - Main Source
// Author      : Ak0s
//============================================================================

#include <iostream>
#include <string>
#include "task.hpp"
#include "task_manager.hpp"

using namespace std;

int argument_manager(int argc, string argv = "");

int main(int argc, char* argv[]) {
  if (argc == 2) {
    string argument = argv[1];
    return argument_manager(argc, argument);
  }
  else {
    return argument_manager(argc);
  }
}

int argument_manager(int argc, string argv) {
  TaskManager* tasks = new TaskManager;

  if (argc == 2) {

// PRINT TASKS, THEIR PRIORITIES AND STATUS IN TERMINAL:
    if (argv == "-l") {
      tasks->print_task_list();
    }

// PRINT HIGH PRIORITY TASKS IN TERMINAL:
    else if (argv == "-lhp") {
      tasks->print_task_list_prioritized("High");
    }

// PRINT MEDIUM PRIORITY TASKS IN TERMINAL:
    else if (argv == "-lmp") {
      tasks->print_task_list_prioritized("Medium");
    }

// PRINT LOW PRIORITY TASKS IN TERMINAL:
    else if (argv == "-llp") {
      tasks->print_task_list_prioritized("Low");
    }

// PRINT LOW PRIORITY TASKS IN TERMINAL:
    else if (argv == "-ldo") {
      tasks->print_task_list_due_ordered();
    }

// ADD NEW TASK TO THE TASK MANAGER:
    else if (argv == "-a") {
      tasks->add_task();
    }

// REMOVE A TASK FROM THE TASKMANAGER:
    else if (argv == "-r") {
      cout << tasks->remove_task() << endl;
    }

// FLAG A TASK AS DOING:
    else if (argv == "-c") {
      cout << tasks->complete_task() << endl;
    }

// FLAG A TASK AS DOING:
    else if (argv == "-m") {
      cout << tasks->move_up_task() << endl;
    }

// PRINT INSTRUCTIONS IF ARGUMENT IS INVALID:
    else {
      cout << endl << "'" + argv + "' is an unsupported argument!" << endl;
      cout << "Please check the instructions and give a valid one!" << endl;
      tasks->print_usage();
    }
    return 0;
  }
  else {
    tasks->print_usage();
    return 1;
  }
  return 0;
}

