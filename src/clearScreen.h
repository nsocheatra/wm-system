#include <iostream>
#include <cstdlib>

void clearScreen() {
#ifdef _WIN32
  system("cls");
#else
  system("clear");
#endif
}