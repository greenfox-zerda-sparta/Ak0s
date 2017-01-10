//============================================================================
// Name        : account.cpp
// Author      : Ak0s
// Description : Bank Account
//============================================================================

#include "account.hpp"

Account::Account(std::string owner_name) {
  owner = owner_name;
  balance = 0;
  bonds.clear();
}

void Account::top_up(double amount) {
  balance += amount;
}

void Account::transfer(Account& other_account, double amount) {
  balance -= amount;
  other_account.top_up(amount);
}

std::string Account::get_owner() {
  return owner;
}

double Account::get_balance() {
  return balance;
}

std::vector<std::pair<double, double>> Account::get_bonds() {
  return bonds;
}
