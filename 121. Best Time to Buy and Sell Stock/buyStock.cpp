# include <limits.h>
# include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int leastPrice = INT_MAX;
        int maxProfit = 0;
        int currProfit = 0;

        for (int i = 0; i < prices.size(); i++){
            if (prices[i] < leastPrice){
                leastPrice = prices[i];
            }
            currProfit = prices[i] - leastPrice;
            if (maxProfit < currProfit){
                maxProfit = currProfit;
            }
        }

        return maxProfit;
    }
};