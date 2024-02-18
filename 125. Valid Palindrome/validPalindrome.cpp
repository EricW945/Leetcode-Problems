#include <string>
using namespace std;

class Solution {
public:
    string toAlphanumeric(string s){
        string result = "";
        for (int i = 0; i < s.length(); i++){
            if (isalpha(s[i])){
                result += tolower(s[i]);
            }
            if (isdigit(s[i])){
                result += s[i];
            }
        }
        return result;
    }

    bool isPalindrome(string s) {
        string s1 = toAlphanumeric(s);
        int mid = s1.length() / 2;
        for (int i = 0; i < mid; i++){
            if (s1[i] != s1[s1.length() - i - 1]){
                return false;
            }
        }
        return true;
    }
};