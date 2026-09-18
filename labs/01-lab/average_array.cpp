#include <iostream>

int main () {
  int SIZE = 10;
  int arr [SIZE];
  std::cout << "Insert Ten integers: ";
  for (int i = 0; i < SIZE; i++) {
    std::cin >> arr[i];
  }
  double total = 0.0;
  for (int i = 0; i < SIZE; i++) {
    total += arr[i];
  }
  std::cout << "Average: " << total / SIZE << '\n';
}