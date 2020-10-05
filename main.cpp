#include <iostream>
#include <vector>
#include "hw5.h"

void print(std::vector<std::string> &v) {
  std::cout << "[";
  bool first = true;
  for (auto x : v) {
    if (!first) {
      std::cout << ", ";
    }
    std::cout << x;
    first = false;
  }
  std::cout << "]";
  std::cout << std::endl;
}

void print2(std::vector<int> &v) {
  std::cout << "[";
  bool first = true;
  for (auto x : v) {
    if (!first) {
      std::cout << ", ";
    }
    std::cout << x;
    first = false;
  }
  std::cout << "]";
  std::cout << std::endl;
}

int main() {
  std::vector<std::string> v;
  std::vector<std::string> k;

  v = {"emma", "dora", "ruth", "ziegellaub", "eichler"};
  std::cout << "Case 1: ";
  BubbleSort(v);
  std::cout << std::endl;

  std::cout << "Case 2: ";
  std::vector<int> vec;
  vec = {11, 20, 24, 8, 10, 1, 3, 4, 34, 14};
  InsertionSort(vec);
  print2(vec);
  

  //MergeSort(v);
  print(v);
  std::cout << "Expected: [dora, eichler, emma, ruth, ziegellaub]" << std::endl;

  
}