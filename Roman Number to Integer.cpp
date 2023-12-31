
class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        unordered_map<char , int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        int n = str.size();
        int ans = 0;
        for(int i = 0; i<n-1 ; i++)
        {
            if(mp[str[i]] >=mp[str[i+1]])
            {
                ans += mp[str[i]];
            }
            else
            {
                ans -=mp[str[i]];
            }
        }
        ans +=mp[str[n-1]];
        return ans;
        
    }
};