//============================================================================
// Name        : client.cpp
// Author      : Ak0s
// Description : Networking - Exercise 01
//============================================================================

#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <SDL.h>
#include <SDL_net.h>

int get_current_date() {
  auto t = time(nullptr);
  auto tm = *localtime(&t);
  std::stringstream ss_date;
  ss_date << std::put_time(&tm, "%Y%m%d");
  return std::stoi(ss_date.str());
}

int get_current_time() {
  auto t = time(nullptr);
  auto tm = *localtime(&t);
  std::stringstream ss_date;
  ss_date << std::put_time(&tm, "%H%M%S");
  return std::stoi(ss_date.str());
}

int main(int argc, char* argv[]) {
/*  std::string user_input;
  const char* IP_address;
  std::cout << "Who do you want to play with? Give me the IP address!" << std::endl;
  std::cin >> user_input;
  IP_address = user_input.c_str(); */

  SDL_Init(SDL_INIT_EVERYTHING);
  SDLNet_Init();
  IPaddress ip;
  SDLNet_ResolveHost(&ip, "127.0.0.1", 1234);
  TCPsocket client = SDLNet_TCP_Open(&ip);

  int send_package_data[5] = {1, 4, 3, get_current_date(), get_current_time()};
  SDLNet_TCP_Send(client, &send_package_data, sizeof(send_package_data));

  int recieved_package_data[5];
  SDLNet_TCP_Recv(client, &recieved_package_data, 100);

  std::cout << "ClientID: " << recieved_package_data[0] << std::endl;

  SDLNet_TCP_Close(client);
  SDL_Quit();
  return 0;
}
