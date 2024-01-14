#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        string s = "";
        // if needle is longer than haystack, then it should return -1
        if (haystack.length() < needle.length()){
            return -1;
        }
        for (int i = 0; i <= haystack.length() - needle.length(); i++){
            for (int j = 0; j < needle.length(); j++){
                s += haystack[i+j];
            }
            if (s == needle){
                return i;
            }else{
                s = "";
            }
        }
        return -1;
    }
};