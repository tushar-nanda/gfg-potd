class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        // code here
        int ans = 0;
        
        for(int i = 0 ; i < 32 ; i++)
        {
            int cnt = 0;
            for(int j = 0 ; j < N ; j++)
            {
                if((arr[j]&(1<<i))!=0)
                cnt++;
            }
            cnt = cnt%3;
            if(cnt!=0)
            {
                ans =( ans | (1<<i));
            }
        }
        
        return ans;
    }
};