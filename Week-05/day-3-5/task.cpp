//============================================================================
// Name        : ToDo CLI - Task Source
// Author      : Ak0s
//============================================================================

#include "task.hpp"

Task::Task() {
  this->task = "";
  this->priority = "Average";
  this->int_due = 0;
}

Task::Task(std::string _task, std::string _priority, std::string _due, std::string _status) {
  this->task = _task;
  this->priority = _priority;
  this->due = _due;
  this->status = _status;
  this->int_due = 0;
}

std::string Task::get_task() {
  return task;
}

std::string Task::get_priority() {
  return priority;
}

std::string Task::get_due() {
  return due;
}

std::string Task::get_status() {
  return status;
}

int Task::get_int_due() {
  return int_due;
}

void Task::set_task(std::string _task) {
  this->task = _task;
}

void Task::set_priority(std::string _priority) {
  this->priority = _priority;
}

void Task::set_due(std::string _due) {
  this->due = _due;
}

void Task::set_status(std::string _status) {
  this->status = _status;
}

void Task::set_int_due(int _int_due) {
  this->int_due = _int_due;
}

Task::~Task() {}
