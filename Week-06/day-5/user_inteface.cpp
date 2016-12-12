//============================================================================
// Name        : bulls_and_cows.cpp - User Interface Source
// Author      : Ak0s
// Description : Bulls and Cows game implementation
//============================================================================

#include "user_interface.hpp"

User_Interface::User_Interface() {
  max_tries = 10;
  progress = 1;
}

bool User_Interface::rules_and_ready() {
  std::ifstream file("rules.txt");
  if (file.is_open()) {
    std::string line_of_rules;
    while (getline(file, line_of_rules)) {
    std::cout << line_of_rules << std::endl;
    }
  }
  else {
    std::cerr << "Could not open the rules!";
  }
  char answer;
  std::cin >> answer;
  if (answer == 'y' || answer == 'Y') {
    return true;
  }
  else {
    return false;
  }
}

void User_Interface::set_game_params() {
  try {
    unsigned int length, tries;
    std::cout << "How long the secret number should be? (2-10)" << std::endl;
    std::cin >> length;

    if (length > 10 || length < 2) {
      throw "The length must be between or equal to 2 and 10! Try again!";
    }

    std::cout << "How many tries do you want? (max. 5 times the secret number's length)" << std::endl;
    std::cin >> tries;

    if (tries > length * 5 || length <= 0) {
      throw "The number of tries must be between or equal to 1 and five times of the secret number's length! Try again!";
    }

    std::cout << "Everything is set! Let's start playing! :)" << std::endl
              << "=======================================================================" << std::endl;

    set_number_length(length);
    set_max_tries(tries);
  }
  catch (const char* excp) {
    std::cout << excp << std::endl;
    return set_game_params();
  }
}

void User_Interface::game_body() {
  while (progress <= max_tries) {
    print_answer_to_guess(check_guess(user_guess()));
    progress++;
  }
}

std::vector<unsigned int> User_Interface::user_guess() {
  try {
    std::string entered_guess, temp;
    std::vector<unsigned int> entered_guess_digits(get_number_length());
    std::cout << "Make your " << progress << ". guess (" << max_tries - progress + 1 << " tries left): " << std::endl;
    std::cin >> entered_guess;
    if (entered_guess.length() == get_number_length()) {
      for (unsigned int i = 0; i < get_number_length(); i++) {
        temp = entered_guess[i];
        entered_guess_digits[i] = stoi(temp);
      }
      return entered_guess_digits;
    }
    else {
      throw "Invalid guess! ";
    }
  }
  catch (const char* excp) {
    std::cout << excp << "Give a " << get_number_length() << " digit guess!" << std::endl;
    return user_guess();
  }
}

std::vector<unsigned int> User_Interface::check_guess(std::vector<unsigned int> entered_guess_digits) {
  std::vector<unsigned int> bulls_and_cows(2);
  for (unsigned int i = 0; i < get_number_length(); i++) {
    if (entered_guess_digits[i] == get_secret_number()[i]) {
      bulls_and_cows[0]++;
    }
    for (unsigned int j = 0; j < get_number_length(); j++) {
      if (entered_guess_digits[i] == get_secret_number()[j] && i != j) {
        bulls_and_cows[1]++;
      }
    }
  }
  return bulls_and_cows;
}

void User_Interface::print_answer_to_guess(std::vector<unsigned int> bulls_and_cows) {
  if (bulls_and_cows[0] == get_number_length()) {
    return game_over();
  }
  else if (progress == max_tries) {
    return game_over();
  }
  else {
    std::cout << bulls_and_cows[0] << "B" << bulls_and_cows[1] << "C" << std::endl;
  }
}

void User_Interface::game_over() {
  if (progress < max_tries) {
    std::cout << "=======================================================================" << std::endl
              << "Congratulations, you win in " << progress << " tries! The secret number was: ";
    for (unsigned int i = 0; i < get_number_length(); i++) {
      std::cout << get_secret_number()[i];
    }
    progress = max_tries;
  }
  else {
    std::cout << "=======================================================================" << std::endl
              << "Game over! You lost! The secret number was: ";
    for (unsigned int i = 0; i < get_number_length(); i++) {
      std::cout << get_secret_number()[i];
    }
  }
}

unsigned int User_Interface::get_max_tries() {
  return max_tries;
}

void User_Interface::set_max_tries(unsigned int new_max_tries) {
  this->max_tries = new_max_tries;
}

