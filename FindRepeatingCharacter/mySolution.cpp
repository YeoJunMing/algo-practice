#include <iostream>
#include <string>
#include <unordered_map>

int main() {
  std::string input;
  std::unordered_map<char, int> map;

  //storing characters into hash table
  while (getline(std::cin, input)) { 
    for (char c : input) {
      if(map.count(c) == 0) {
        map[c] = 1;
      }
      else {
        map[c]++;
      }
    }
    for (const auto& [key, value] : map) {
      if (value > 1) {
        std::cout << key << "\n";
      }
      else 
        std::cout << '\0';
    }
  }      
}
