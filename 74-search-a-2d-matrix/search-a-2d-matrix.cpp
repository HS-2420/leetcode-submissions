class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int s=0;
        int e=(m*n)-1;
        while(s<=e)
        {
            int m=s+((e-s)/2);
            int row=m/n;
            int col=m%n;
            if(matrix[row][col]<target)
            {s=m+1;}
            else if(matrix[row][col]>target)
            {e=m-1;}
            else
            {return true;}
        }
        return false;
    }
};