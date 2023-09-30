class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &mat)
    {
        // code here 
        int n = mat.size();
        int m = mat[0].size();
        
        int r[n] = {0};
        int c[m] = {0};
        for(int i = 0 ; i<n ; i++)
        {
            for(int j = 0 ; j<m ; j++)
            {
                if(mat[i][j] == 1)
                {
                    r[i] = 1;
                    c[j] = 1;
                }
            }
        }
        
        for(int i = 0 ; i<n;  i++)
        {
            if(r[i] == 1)
            {
                for(int j = 0 ; j <m ; j++)
                {
                    mat[i][j] = 1;
                }
            }
        }
        for(int i = 0 ; i<m;  i++)
        {
            if(c[i] == 1)
            {
                for(int j = 0 ; j <n ; j++)
                {
                    mat[j][i] = 1;
                }
            }
        }
    }
};