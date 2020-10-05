/***
* PSUEDOCODE
  BubbleSort (vector string &vec)
    for (int i = 0; i < vecsize; i++)
    vec [i] 
  
  for (int i = 0; i < vecsize; i++)
  
***/

#include <iostream>
#include <vector>
#include "hw5.h"

void BubbleSort(std::vector<std::string> &vec) {
  for (int i = 0; i < vec.size(); i++)
  std::cout << vec[i] << ' ';

  for (int i = 0; i < vec.size(); i++) {
    for (int j = i + 1; j < vec.size(); j++) 
    {
      if (vec[i].compare(vec[i+1])) {
        if (vec[i] > vec[j])
          swap(vec[i],vec[j]);
      }
        else if (vec[i] < vec[j])
          swap(vec[i],vec[j]);
    }
  }
}

void InsertionSortHelper(std::vector<int>& v, int n) {
  if(n > 0) 
    InsertionSortHelper(v, n - 1);
  
  int temp = v[n-1];
  int index = n - 2;
  
  while(index >= 0 && temp < v[index]) {
    v[index + 1] = v[index];
    index--;
  }
  v[index + 1] = temp;
}

void InsertionSort(std::vector<int>&v) {
  InsertionSortHelper(v, v.size());
}

void Merge(std::vector<std::string> &vec, int low, int high) {
  int mid = (low + high)/2;
  int i = low;
  int j = mid +1;
  int k = low;

  std::vector<std::string> temp(vec.size());

  while(i <= mid && j <= high) {
    if(vec[i] < vec[j]) {
      std::cout << "In compare" << std::endl;
      temp[k++] = vec[i++];
    }
    else {
      std::cout << "In else" << std::endl;
      temp[k++] = vec[i++];
    }
  }
  while(i <= mid) {
    std::cout << "In 2nd while " << std::endl;
    temp[k++] = vec[i++];
  }
  while(j <= high) {
    std::cout << " In 3rd while " << std::endl;
    temp[k++] = vec[j++];
  }
  
  for(int i = low; i <= high; i++) {
    std::cout <<"In last" << std::endl;
    vec[i]= temp[i];
  }
}

/*void MergeSortHelper(std::vector<std::string> &vec,int low, int high) {
  int middle;
    if (low >= high)
    return;

    middle = (low + high) / 2;
    MergeSortHelper(vec, low, middle);
    MergeSortHelper(vec, middle + 1, high);
    Merge(vec, low, high); 
}

void MergeSort(std::vector<std::string> &vec) {
  int n = vec.size();
  MergeSortHelper(vec, 0 , n-1);
}*/