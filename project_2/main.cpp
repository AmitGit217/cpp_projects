#include <iostream>

int addNumbers(int num1, int num2) { return num1 + num2; }

int main() {
  int firstNum{5};
  int secondNum{5};
  int sum = addNumbers(firstNum, secondNum);
  std::cout << "This is the sum: " << sum << std::endl;
  return 0;
}