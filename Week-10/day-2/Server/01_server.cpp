//============================================================================
// Name        : server.cpp
// Author      : Ak0s
// Description : Networking - Exercise 01
//============================================================================

#include <iostream>
#include <map>
#include <SDL.h>
#include <SDL_net.h>

int main(int argc, char* argv[]) {
  SDL_Init(SDL_INIT_EVERYTHING);
  SDLNet_Init();
  IPaddress ip;
  SDLNet_ResolveHost(&ip, NULL, 1234);
  TCPsocket server = SDLNet_TCP_Open(&ip);
  TCPsocket client;
  while (1) {
    client = SDLNet_TCP_Accept(server);
    if (client) {
      int recieved_package_data[5];
      SDLNet_TCP_Recv(client, &recieved_package_data, 100);
      std::map<std::string, int> recieved_package = {{"ClientID", recieved_package_data[0]},
                                                     {"StepID_x", recieved_package_data[1]},
                                                     {"StepID_y", recieved_package_data[2]},
                                                     {"Date", recieved_package_data[3]},
                                                     {"Time", recieved_package_data[4]}};

      std::cout << "ClientID: " << recieved_package["ClientID"] << std::endl;
      std::cout << "StepID_x: " << recieved_package["StepID_x"] << std::endl;
      std::cout << "StepID_y: " << recieved_package["StepID_y"] << std::endl;
      std::cout << "Time Stamp: " << recieved_package["Date"] << " - " << recieved_package["Time"] << std::endl;

      int send_package_data[5] = {1, 2, 3, 4, 5};
      SDLNet_TCP_Send(client, &send_package_data, sizeof(send_package_data));

      SDLNet_TCP_Close(client);
      break;
    }
  }
  SDL_Quit();
  return 0;
}
