class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = n;
        int ans[n][n];
        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < m; col++)
            {
                ans[col][m - row - 1] = matrix[row][col];
            }
        }
        for(int i=0; i<n;i++)
            for(int j=0;j<m;j++)
                matrix[i][j] = ans[i][j];
        
    }
};