#include <iostream>

int main() {
  unsigned int num1{4}; // Only positive
  signed int num2{-4};  // Any int

  std::cout << "This is the unsigned var " << num1 << std::endl;
  std::cout << "This is the signed var " << num1 << std::endl;

  return 0;
}