/*
    - takeaway: when encounter a close bracket, we need to check if
                the stack is empty or not. If it is empty, we should not
                pop() from the stack because it will cause a runtime error
*/


#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> myStack;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == '(' || s[i] == '[' || s[i] == '{'){
                myStack.push(s[i]);
            }else{
                if (myStack.empty() ||
                    (s[i] == ')' && myStack.top() != '(') ||
                    (s[i] == ']' && myStack.top() != '[') ||
                    (s[i] == '}' && myStack.top() != '{')){
                        return false;
                    }
                myStack.pop();
            } 
        }
        return myStack.empty();
        
    }
};