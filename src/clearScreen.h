#include <iostream>
#include <cstdlib>
#include "header.h"

void clearScreen() {
#ifdef _WIN32
  system("cls");
#else
  system("clear");
#endif
}