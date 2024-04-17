class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        vector<int>prev;
        for(int i =0;i<numRows;i++){
            vector<int>cr(i+1,1);
            for(int j = 1 ; j<i;j++){
                cr[j]= prev[j-1]+prev[j];
            }
            ans.push_back(cr);
            prev= cr;

        }
        return ans;
    }
};


