// Write a recursive function that returns the number of 1 in the binary representation
// of N. Use the fact that this is equal to the number of 1 in the representation of N/2,
// plus 1, if N is odd.

#include <iostream>

int binaryOnes (int num, int ones = 0) {
  if (num == 0) return ones + 0;
  return binaryOnes(num >> 1, ones + (num & 1)); // num returns 1 when last bit is one (when num is odd)
}

int main () {
  int num;
  std::cout << "Enter NUM: ";
  std::cin >> num;
  int ones = binaryOnes(num);
  std::cout << "No of ones in num binary representation: " << ones << '\n';
}