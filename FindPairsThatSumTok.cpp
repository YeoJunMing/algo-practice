#include <iostream>
#include <unordered_map>

bool function(int length, int k, int* arr) {
  std::unordered_map<int, bool> map;
  for (int i = 0; i < length; i++) {
    if (map.find(k - arr[i]) != map.end())
      return true;
    else map[arr[i]] = true;   
  }
  return  false;
}
