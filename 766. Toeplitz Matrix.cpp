class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int row_no=matrix.size();
        if(row_no==0)
            return false;
        int col_no=matrix[0].size();
        for (int i=0;i<row_no-1;i++)
        {
            for(int j=0;j<col_no-1;j++)
            {
                if (matrix[i+1][j+1]!=matrix[i][j])
                    return false;
            }
        }
        return true;
    }
};
