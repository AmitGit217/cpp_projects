#include <iostream>

int main() {
  // Boolean is 8 bits
  bool greenLight{true};
  bool redLight{false};

  if (greenLight && !redLight) {
    std::cout << "GO!" << std::endl;
  } else {
    std::cout << "STOP!" << std::endl;
  }

  return 0;
}