/*
    - the reason why recursion cannot work is because for large n,
      the recursion tree will be too large and the program will
      run out of memory
*/


#include <vector>
using namespace std;

class Solution {
public:
    int solve(int n, vector<int> &dp){
        if (n < 0){
            return 0;
        }
        if (n == 0){
            return 1;
        }

        /*
            if dp[n] has been calculated before, return it
            it avoids duplicate calculation
        */ 
        if (dp[n] != -1){ 
            return dp[n];
        }
        
        dp[n] = solve(n-1, dp) + solve(n-2, dp);

        return dp[n];
    }

    int climbStairs(int n) {
        // it stores the previous results into a vector, so it won't exceed the memory limit
        vector<int> dp(n+1, -1);
        return solve(n, dp);
    }
};