//============================================================================
// Name        : bank_account_test.cpp
// Author      : Ak0s
// Description : Bank Account
//============================================================================

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../account.hpp"

TEST_CASE("Account constructor") {
  Account account("Darth Vader");
  REQUIRE(account.get_owner() == "Darth Vader");
  REQUIRE(account.get_balance() == 0);
  REQUIRE(account.get_bonds().empty());
}

TEST_CASE("Top up method adds to balance") {
  Account account("Darth Maul");
  account.top_up(300);
  account.top_up(10.12);
  account.top_up(-0.02);
  REQUIRE(account.get_balance() == 310.10);
}

TEST_CASE("Transfer method substract from account and adds it to another") {
  Account account1("Luke");
  Account account2("Chewie");
  account1.transfer(account2, 100);
  REQUIRE(account1.get_balance() == -100);
  REQUIRE(account2.get_balance() == 100);
}
