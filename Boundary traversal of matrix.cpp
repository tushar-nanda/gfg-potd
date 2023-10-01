
class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > mat, int n, int m) 
    {
        // code here
        int s_r = 0;
        int s_c = 0;
        int e_r = n-1;
        int e_c = m-1;
        vector<int> ans;
        for(int i = s_c;i<=e_c;i++)
        {
            ans.push_back(mat[s_r][i]);
            
        }
        s_r++;
        if(s_r >=n)  
            return ans;
        for(int i = s_r;i<=e_r;i++)
        {
            ans.push_back(mat[i][e_c]);
        }
        e_c--;
        if(e_c <0)  
        return ans;
        for(int i = e_c;i>=s_c;i--)
        {
            ans.push_back(mat[e_r][i]);
        }
        e_r--;
        if(e_r <0)  
        return ans;
        for(int i = e_r;i>=s_r;i--)
        {
            ans.push_back(mat[i][s_c]);
        }
        s_c++;
        if(s_c >=m)  
        return ans;
        return ans;
        
        

    }
};