class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int count = 0;
        int total = row * col;
        
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row - 1;
        int endingCol = col - 1;
        
        while(count < total){
            
            // Print starting row
            for(int i = startingCol;count < total && i <= endingCol; i+=1){
                ans.push_back(matrix[startingRow][i]);
                count+=1;
            }
            startingRow+=1;
            
            // Print ending column
            for(int i = startingRow;count < total && i <= endingRow; i+=1){
                ans.push_back(matrix[i][endingCol]);
                count+=1;
            }
            endingCol-=1;
            
            //Printing ending row
            for(int i = endingCol; count < total && i>=startingCol; i-=1){
                ans.push_back(matrix[endingRow][i]);
                count+=1;
            }
            endingRow-=1;
            
            //Printing starting column
            for(int i =endingRow; count < total && i>=startingRow; i-=1){
                ans.push_back(matrix[i][startingCol]);
                count+=1;
            }
            startingCol+=1;
            
        }
        return ans;
    }
};