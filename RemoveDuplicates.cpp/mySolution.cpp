#include <iostream>
#include <unordered_set> //set stores unique elements only
#include <vector>

int main() {
  std::vector<int> array;
  std::unordered_set<int> set;

  //to get input of array
  int input;
  std::cout << "Enter integers: type -1 to stop ";
  while (true) {
    std::cin >> input;
    if (input == -1) {break; }
    array.push_back(input);
  }

  for (int i = 0; i < array.size(); i ++) {
    set.insert(array[i]);
  }

  for (int j : set) {
    std::cout << j << " ";
  }
}
