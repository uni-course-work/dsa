#include <iostream>

int linearSearch(int arr[], int toFind, int SIZE) {
  for (int i = 0; i < SIZE; ++i) {
    if (arr[i] == toFind) {
      return i;
    }
  }
  return -1;
};

int main () {
  int SIZE = 10;
  int arr[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int toFind;
  for (int x: arr) {
    std::cout << x << ' ';
  }
  std::cout << '\n';
  std::cout << "TO Find: ";
  std::cin >> toFind;
  int index = linearSearch(arr, toFind, SIZE);
  if (index == -1) {
    std::cout << "Failed to find number: " << toFind << '\n';
    return 0;
  }
  std::cout << "Found number " << toFind << " at index: " << index << '\n';
}