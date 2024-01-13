/*
    - takeaway: use one pointer to keep track of the value that equals
                to the target value, and another pointer to iterate through
                the vector. If the second pointer finds a value that is not
                equal to the target value, then swap the value at the first
                pointer with the value at the second pointer, and increment
                the first pointer.
*/


#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int currNonTarget = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] != val){
                nums[currNonTarget] = nums[i];
                currNonTarget++;
            }
        }
        return currNonTarget;
    }
};