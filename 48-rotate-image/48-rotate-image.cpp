class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = n;
        int ans[n][n];
        for (int row = 0; row < n; row+=1)
        
            for (int col = 0; col < m; col+=1)
            
                ans[col][m - row - 1] = matrix[row][col];
            
        
        for(int i=0; i<n;i+=1)
            for(int j=0;j<m;j+=1)
                matrix[i][j] = ans[i][j];
        
    }
};