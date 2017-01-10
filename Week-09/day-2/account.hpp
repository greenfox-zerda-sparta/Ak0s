//============================================================================
// Name        : account.hpp
// Author      : Ak0s
// Description : Bank Account
//============================================================================

#ifndef ACCOUNT_HPP_
#define ACCOUNT_HPP_

#include <iostream>
#include <utility>
#include <vector>

class Account {
  private:
    std::string owner;
    double balance;
    std::vector<std::pair<double, double>> bonds;
  public:
    Account(std::string);
// Main methods
    void top_up(double);
    void transfer(Account& other_account, double amount);
// Getters
    std::string get_owner();
    double get_balance();
    std::vector<std::pair<double, double>> get_bonds();
};

#endif /* ACCOUNT_HPP_ */
