
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        int n = nums.size();
        if(n&1)
            return 0;
        unordered_map<int,int> mp;
        int cnt = 0;
        for(auto &ele:nums)
        {
            ele = ele%k;
            if(ele == 0)
            cnt++;
            else
            mp[ele]++;
        }
        if(cnt&1)
            return 0;
       
        while(!mp.empty())
        {
            auto ele = mp.begin();
            int val = ele->first;
             mp[val]--;
             if(mp[val] == 0)
                mp.erase(val);
            if(mp.find(k-val) == mp.end())
                return 0;
            else
            {
               mp[k-val]--;
               if(mp[k - val] == 0)
                mp.erase(k - val);
            }
        }
        return 1;
    }
};