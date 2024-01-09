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
        string temp = s.substr(0, half);
        string reverse;
        if (length % 2 == 0){
            for (int i = length - 1; i >= half; i--){
                reverse += s[i];
            }
        }else{
            for (int i = length - 1; i > half; i--){
                reverse += s[i];
            }
        }
        
        return temp == reverse;
    }
};