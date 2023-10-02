//User function template for C++

class Solution{
  public:	
    using ll = long long;
	int distinctSubsequences(string s)
	{
	    // Your code goes here
	    const int mod = 1e9+7;
	    int n = s.length();
	    ll ans = 0;
	    ll diff = 0;
	    vector<int> arr(26 ,-1);
	    
	    for(int i = 0 ; i<n ; i++)
	    {
	        if(i == 0)
	        {
	            arr[s[i]-'a'] = 1;
	            ans = 1;
	            continue;     
	       }
	       diff = ans + 1;
	       
	       if(arr[s[i]-'a']==-1)
	       {
	           ans = (ans + diff)%mod;
	       }
	       else
	        ans = (ans+diff-arr[s[i]-'a'])%mod;
	       
	       arr[s[i]-'a'] = diff;
	    }
	    ans++;
	    return ans<0?ans+mod:ans%mod;
	}
};