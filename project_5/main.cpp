#include <iostream>

int main() {

  int garbage;
  int undefined{};
  int four{4};

  std::cout << "Garbage " << garbage << std::endl;
  std::cout << "Undefined " << undefined << std::endl; // Will print 0
  std::cout << "Four " << four << std::endl;

  return 0;
}