#include <iostream>

int main () {
  int SIZE = 10;
  int arr [SIZE];
  std::cout << "Insert Ten integers: ";
  for (int i = 0; i < SIZE; i++) {
    std::cin >> arr[i];
  }
  int sum = 0;
  for (int i = 0; i < SIZE; i ++) {
    sum += arr[i];
  }
  std::cout << "SUM: " << sum << '\n';
}