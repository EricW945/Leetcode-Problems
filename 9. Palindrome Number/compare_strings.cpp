/*
    - convert the number to string
    - seperate the string from the middle
    - reverse the second half
    - compare the first half with the reversed second half
*/


#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int length = s.length();
        int half = length / 2;
        string firstHalf = s.substr(0, half);
        int secondHalfStart = (length % 2 == 0) ? half : half + 1;
        string secondHalf = s.substr(secondHalfStart);
        reverse(secondHalf.begin(), secondHalf.end());
        return firstHalf == secondHalf;
    }
};