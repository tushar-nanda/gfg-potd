class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int target) {
        // Your code goes here
        int n = arr.size();
        sort(arr.begin() , arr.end());
        vector<vector<int>> ans;
        for(int i = 0;  i<n-3 ; i++)
        {
             if (i > 0 && arr[i] == arr[i - 1])
            continue;
            for(int j = i+1 ; j <n-2 ; j++)
            {
               if (j > i + 1 && arr[j] == arr[j - 1])
                continue;
                int k = j+1;
                int l = n-1;
                int sum = arr[i] + arr[j];
                
                while(k<l)
                {
                    if(sum + arr[k] + arr[l] == target)
                    {
                        ans.push_back({ arr[i] , arr[j],arr[k] , arr[l]});
                         while (k < l && arr[k] == arr[k + 1]) k++;
                        while (k < l && arr[l] == arr[l - 1]) l--;
                    
                        k++;
                        l--;
                        
                    }
                    else if(sum + arr[k] + arr[l] < target)
                    {
                        k++;
                    }
                    else
                    {
                        l--;
                    }
                }
                
            }
        }
        return ans;
    }
};