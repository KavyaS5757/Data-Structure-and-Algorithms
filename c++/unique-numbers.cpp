#include <stdio.h>
#include<iostream>
#include<stdlib.h>
#include <string.h>
#include <vector>
#include <stdlib.h>
#include<map>
#include <set>
#include <unordered_map>
#include<algorithm>

using namespace std;


int removeDuplicates(std::vector<int>& nums) {
    if (nums.empty())
        return 0;

    int uniqueCount = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[uniqueCount]) {
            uniqueCount++;
            nums[uniqueCount] = nums[i];
        }
    }

    return uniqueCount + 1;
}


int main() {
    std::vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 4, 5};
    int uniqueCount = removeDuplicates(nums);
    
    std::cout << uniqueCount << std::endl;  // Output: 5
    for (int i = 0; i < uniqueCount; i++)
        std::cout << nums[i] << " ";  // Output: 1 2 3 4 5
    std::cout << std::endl;

}