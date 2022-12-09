#include <iostream>

int main() {
  int num1 = 1;
  int num2 = 2;

  std::cout << "Num1: " << num1 << std::endl;
  std::cout << "Num2: " << num2 << std::endl;

  std::cout << std::boolalpha;

  std::cout << "Is num1 greater than num2? " << (num1 > num2) << std::endl;
  std::cout << "Is num1 less than num2? " << (num1 < num2) << std::endl;
  std::cout << "Is num1 equal to num2? " << (num1 == num2) << std::endl;
  std::cout << "Is num1 different than num2? " << (num1 != num2) << std::endl;

  return 0;
}