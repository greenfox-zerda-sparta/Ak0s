//============================================================================
// Name        : ToDo CLI - Task Manager Header
// Author      : Ak0s
//============================================================================

#ifndef TASK_MANAGER_HPP_
#define TASK_MANAGER_HPP_

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <windows.h>
#include <mmsystem.h>
#include "task.hpp"

using namespace std;

class TaskManager {
  private:
    unsigned int task_counter;
    Task** tasks;
    void add_task_to_task_manager(Task& task);
    void read_task_list_from_file();
    void write_task_list_to_file();
    int get_current_date();
    void string_date_to_int();
    string get_date_parts(int i, int j);
  public:
    TaskManager();
    void print_usage();
    void add_task();
    string complete_task();
    string remove_task();
    string move_up_task();
    void print_task_list ();
    void print_task_list_prioritized(string priority);
    void print_task_list_due_ordered();
    ~TaskManager();
};

#endif
