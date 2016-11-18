//============================================================================
// Name        : ToDo CLI - Task Header
// Author      : Ak0s
//============================================================================

#ifndef TASK_HPP_
#define TASK_HPP_

#include <iostream>
#include <string>

class Task {
  private:
    std::string task;
    std::string priority;
    std::string due;
    std::string status;
    int int_due;
  public:
    Task();
    Task(std::string _task, std::string _priority, std::string _due, std::string _status);
    std::string get_task();
    std::string get_priority();
    std::string get_due();
    std::string get_status();
    int get_int_due();
    void set_task(std::string _task);
    void set_priority(std::string _priority);
    void set_due(std::string _due);
    void set_status(std::string _status);
    void set_int_due(int _int_due);
    ~Task();
};

#endif
