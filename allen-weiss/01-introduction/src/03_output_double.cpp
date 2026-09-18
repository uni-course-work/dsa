// Write a function to output an arbitrary double number (which might be negative)
// using only printDigit for I/O.

#include <cmath>
#include <iostream>

using namespace std;

void printDigit (int n) {
  std::cout << n;
}
void printInteger (int n) {
  if (n >= 10 || n <= -10) {
    printInteger(n / 10);
  }
  printDigit(n % 10);
}
void printFraction (double d, int digitRequested) {
  d*= 10;
  int integerPart = std::trunc(d);
  printDigit(integerPart);
  if (digitRequested <= 1) return;
  printFraction(d - integerPart, digitRequested - 1);
}
int main() {
  double num = 100.09930;
  int integerPart = std::trunc(num);
  double fractionPart = num - integerPart;
  printInteger(integerPart);
  std::cout << '.';
  printFraction(fractionPart, 4);
  std::cout << '\n';
  return 0;
}