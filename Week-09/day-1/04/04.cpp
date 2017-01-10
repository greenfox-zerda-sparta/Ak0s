//============================================================================
// Name        : 04.cpp
// Author      : Ak0s
//============================================================================

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "WordToolbox.hpp"

TEST_CASE("WordToolbox countHowMany(char c) including c") {
  WordToolbox word("Tarzan's toenails. Me Tarzan, you Jane");
  REQUIRE(word.countHowMany('a') == 6);
  REQUIRE(word.countHowMany('n') == 4);
  REQUIRE(word.countHowMany('t') == 3);
}

TEST_CASE("WordToolbox countHowMany(char c) c not included") {
  WordToolbox word("Tarzan's toenails");
  CHECK_THROWS(word.countHowMany('y'));
}

TEST_CASE("WordToolbox isAnAnagram(std::string stringToCheck)") {
  WordToolbox word("alma");
  REQUIRE(word.isAnAnagram("lama"));
  REQUIRE_FALSE(word.isAnAnagram("help"));
}

TEST_CASE("WordToolbox isAnAnagram(std::string stringToCheck) blank string") {
  WordToolbox word("aloft");
  REQUIRE(word.isAnAnagram("float"));
  REQUIRE_FALSE(word.isAnAnagram(""));
}

TEST_CASE("WordToolbox convertToLowerCase(std::string str)") {
  WordToolbox word("Hi, this is Kinga!");
  REQUIRE(word.convertToLowerCase("Hello") == "hello");
}
