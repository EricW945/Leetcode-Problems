/*
    hash table:
        - use unordered_map
        - key: element in the vector
        - value: index of the element
        - time complexity: O(n)
*/


#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashMap;
        for (int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];
            if (hashMap.find(complement) != hashMap.end()){
                return {hashMap[complement], i};
            }
            hashMap.insert({nums[i], i});
        }

        return {};
    }
};