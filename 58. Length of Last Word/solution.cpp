/*
    - Don't need to initialize a new string and return the length of it
    - instead, just use a integer count to keep track of the length
*/


#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        bool flag = false;
        for (int i = s.length()-1; i >= 0; i--){
            if (flag){
                if (s[i] != ' '){
                    count++;
                }else{
                    break;
                }
            }else{
                if (s[i] != ' '){
                    count++;
                    flag = true;
                }
            }
        }
        return count;
    }
};