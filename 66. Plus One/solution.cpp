#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result;
        int carry = 1;
        int digit;
        for (int i = digits.size()-1; i >= 0; i--){
            digit = (digits[i] + carry) % 10;
            carry = (digits[i] + carry) / 10;
            result.insert(result.begin(), digit);
        }
        if (carry != 0){
            result.insert(result.begin(), carry);
        }
        return result;
    }
};