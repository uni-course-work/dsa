// Suppose you have a group of N numbers and would like to determine the kth largest.
// This is known as the selection problem
// Write a program to solve the selection problem. Let k = N/2. Draw a table showing
// the running time of your program for various values of N.
#include <iostream>
#include <vector>
#include <algorithm>

void shiftByOne (std::vector<double>& arr, int j) {
  for (int i = arr.size() - 1; i > j; i--) {
    arr[i] = arr[i - 1];
  }
}
int main () {
  int N, temp;
  std::cout << "Enter Positive N: ";
  std::cin >> N;
  int k = N / 2;
  std::vector<double> arr(k); 
  std::cout << "Enter N Values: ";
  for (int i = 0; i < k; ++i) {
    std::cin >> arr[i];
  }
  std::sort(arr.rbegin(), arr.rend());
  for (int i = k; i < N; ++i) {
    std::cin >> temp;
    if (temp < arr[k - 1]) continue;
    for (int j = 0; j < k; j++) {
      if (temp > arr[j]) {
        shiftByOne(arr, j);
        arr[j] = temp;
        break;
      }
    }
  }
  std::cout << "Kth Largest: " << arr[k - 1] << '\n';
}