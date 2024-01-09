/*
    brute force: 
        - the most intuitive way to solve a problem
        - use nested for loops to find the result
        - time complexity: O(n^2)
*/


#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> result;
            for (int i = 0; i < nums.size() - 1; i++){
                for (int j = i + 1; j < nums.size(); j++){
                    if (nums[i] + nums[j] == target){
                        result = {i, j};
                    }
                }
            }
            return result;
        }
};