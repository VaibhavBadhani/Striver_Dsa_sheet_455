class Solution {
public:
    vector<int>dx = {-1,1,0,0};
    vector<int>dy = {0,0,-1,1};
    void dfs(int i,int j,vector<vector<int>>& matrix,vector<vector<bool>>& vis){
        matrix[i][j]=0;
        vis[i][j]= true;
        for(int k =0;k<4;k++){
            int newx = dx[k]+i;
            int newy = dy[k]+j;
            if(newx>=0&&newy>=0&&newx<matrix.size()&&newy<matrix[0].size()&&matrix[newx][newy]==0&&!vis[newx][newy]){
                matrix[newx][newy]=0;
                dfs(newx,newy,matrix,vis);
            }
        }

    }
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<bool>> vis(matrix.size(), vector<bool>(matrix[0].size(), false));
       for(int i =0;i<matrix.size();i++){
        for(int j =0;j<matrix[0].size();j++){
            if(matrix[i][j]==0&&!vis[i][j]){
                vis[i][j]= true;
                dfs(i,j,matrix,vis);
            }
        }
       }
        for(int i =0;i<matrix.size();i++){
         for(int j =0;j<matrix[0].size();j++){  
                if (vis[i][j]) {
                    for (int k = 0; k < matrix[0].size(); k++) {
                        matrix[i][k] = 0;
                    }
                    for (int k = 0; k < matrix.size(); k++) {
                        matrix[k][j] = 0;
                    }
                }
            }
        }
    }
};