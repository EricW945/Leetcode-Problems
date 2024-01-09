/*
    - seperate the given number from the middle
    - reverse the second half
    - compare the first half with the reversed second half
    - if the number is either negative or the number ends with 0 and
      the number is not 0, then return false
*/


#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || ((x != 0) && (x % 10 == 0))){
            return false;
        }
        int reverse = 0;
        while (x > reverse){
            reverse = reverse * 10 + x % 10;
            x /= 10;
        }
        return (x == reverse) || (x == reverse / 10); // the second condition is for odd number of digits
    }
};