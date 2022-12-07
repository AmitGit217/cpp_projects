#include <iostream>

int main() {
  signed int num1{-4};  // Used for any int value: Up to 4 bytes
  unsigned int num2{4}; // Can only store non-negative values: Up to 4 bytes
  short int num3{
      2}; // Used for small integers Range: -32768 to 32767: Up to 2 bytes
  long int num4{41231}; // -2147483647 to 2147483647
  long long int num5{9999379036567657};
  // 8 bytes max value is 9,223,372,036,854,775,807

  // You can of course mix modifiers.

  return 0;
}