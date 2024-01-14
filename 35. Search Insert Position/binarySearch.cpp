/*
    - implement binary search
    - time complexity: O(logn)
*/


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int min = 0;
        int max = nums.size() - 1;
        int mid = min + (max - min) / 2;
        while (min <= max){
            if (nums[mid] == target) {
                return mid;
            }else if (nums[mid] > target){
                max = mid - 1;
                mid = min + (max - min) / 2;
            }else{
                min = mid + 1;
                mid = min + (max - min) / 2;
            }
        }
        return mid;
    }
};