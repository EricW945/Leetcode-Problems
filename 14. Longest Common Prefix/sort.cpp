/*
    - takeaway: the reason why using sort() is that we want to find the
                largest common prefix for ALL strings in the vector.
                After sorting, we only need to compare the first and last
                string because they are the most different strings
                in the vector.
*/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        if (strs.size() == 0){
            return result;
        }
        sort(strs.begin(), strs.end()); // time complexity: O(nlogn)
        int n = strs.size();
        string first = strs[0];
        string last = strs[n-1];
        for (int i = 0; i < min(first.length(), last.length()); i++){
            if (first[i] == last[i]){
                result += first[i];
            }else{
                return result;
            }
        }
        return result;
    }
};