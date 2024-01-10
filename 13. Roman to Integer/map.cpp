/*
    - takeaway: we want to compare number instead of letter,
                so we map letter to number  
*/


#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        
        unordered_map<char, int> myMap;
        myMap['I'] = 1;
        myMap['V'] = 5;
        myMap['X'] = 10;
        myMap['L'] = 50;
        myMap['C'] = 100;
        myMap['D'] = 500;
        myMap['M'] = 1000;
        
        int sum = 0;
        for (int i = 0; i < s.length() - 1; i++){
            if (myMap[s[i]] < myMap[s[i+1]]){
                sum -= myMap[s[i]];
            }else{
                sum += myMap[s[i]];
            }
        }
        sum += myMap[s[s.length()-1]];
        
        return sum;
    }
};