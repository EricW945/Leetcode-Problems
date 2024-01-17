/*
    - takeaway:
        - use long long to avoid overflow
        - use round() to round the result
*/


#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1){
            return x;
        }
        int low = 1;
        int high = x;
        int mid = -1;
        while (low <= high){
            mid = low + (high - low) / 2;
            long long square = static_cast<long long>(mid) * mid;
            if (square == x){
                return mid;
            }else if(square < x){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return static_cast<int>(round(high));
    }
};