class Solution
{
  public:
    int cal(string s , int k)
    {
        int i = 0 ;
    	int j = 0;
    	int n = s.length();
    	long long int ans = 0;
    vector<int> mp(26,0);
    int dist = 0;
    	while(j<n)
    	{
    	    if(mp[s[j]-'a'] == 0)
    	        dist++;
    	    mp[s[j]-'a']++;
    	    while(dist>k)
    	    {
    	        mp[s[i]-'a']--;
    	        if(mp[s[i]-'a']==0)
    	        {
    	            dist--;
    	        }
    	        i++;
    	    }
    	    ans = ans + j-i+1;
    	    
    	    j++;
    	}
    	return ans;
    }
    long long int substrCount (string s, int k) {
    	//code here.
    	
    	return cal(s , k) - cal(s , k-1);
    	
    }
};