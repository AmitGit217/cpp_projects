#include <iostream>

int main() {
  int num1 = 7;
  int num2 = 2;
  int product = num1 * num2;

  std::cout << "Product: " << product << std::endl;
  std::cout << "Product is incremented... " << std::endl;
  product++;
  std::cout << "Product after postfix " << product << std::endl;
  std::cout << "Num1 with prefix: " << ++num1 << std::endl;

  return 0;
}