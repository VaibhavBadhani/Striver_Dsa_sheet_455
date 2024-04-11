class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n = matrix.size();
        int m = matrix[0].size();
        int tot = n*m;
        int startrow=0;
        int endrow=n-1;
        int startcol=0;
        int endcol=m-1;
        int count = 0;
        while(count<tot)
        {
            for(int i = startcol;i<=endcol&&count<tot;i++)
            {
                ans.push_back(matrix[startrow][i]);
                count++;
            }
            startrow++;
            for(int i = startrow;i<=endrow&&count<tot;i++)
            {
                ans.push_back(matrix[i][endcol]);
                count++;
            }
            endcol--;
            for(int i = endcol;i>=startcol&&count<tot;i--)
            {
                ans.push_back(matrix[endrow][i]);
                count++;
            }
            endrow--;
            for(int i = endrow;i>=startrow&&count<tot;i--)
            {
                ans.push_back(matrix[i][startcol]);
                count++;
            }
            startcol++;
        }
        return ans;
    }
};