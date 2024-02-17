#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans(rowIndex + 1, 1);
        for (int i = 1; i <= rowIndex; i++){
            for (int index = i - 1; index >= 1; index--){
                ans[index] += ans[index - 1];
            }
        }
        return ans;
    }
};