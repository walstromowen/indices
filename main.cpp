#include <iostream>

int main() {
  int nums[] = {2, 7, 11, 15};
  int target = 9;
  for(int i = 0; i < sizeof(nums); i++){
    for(int j = 0; j < sizeof(nums); j++){
      if(i != j){
        if(nums[i] + nums[j] == target){
          std::cout << "[" << i << ", " << j << "]";
          return 0;
        }
      }
    }
  }
  return 0;
}
