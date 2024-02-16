#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int currRow = 1; currRow <= numRows; currRow++){
            vector<int> rowVector(currRow,1);
            for (int index = 1; index < currRow-1; index++){
                rowVector[index] = ans[currRow-2][index-1] + ans[currRow-2][index];
            }
            ans.push_back(rowVector);
        }
        return ans;
    }
};