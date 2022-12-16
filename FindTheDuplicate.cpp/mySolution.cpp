#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
  std::vector<int> array;
  std::unordered_map<int, int> map;

  //to get input of array
  int input;
  std::cout << "Enter integers: type -1 to stop ";
  while (true) {
    std::cin >> input;
    if (input == -1) {break; }
    array.push_back(input);
  }

  for (int n : array) {
    if (map.count(n) == 0)
      map[n] = 1;
    else
      map[n]++;
  }
  for (const auto& [key, value] : map) {
    if (value > 1) 
      std::cout << key << " ";
  }
}
