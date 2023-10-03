class Solution{
    public:
    using ll = long long int;
    string colName (long long int n)
    {
        // your code here
        
        string ans = "";
        while(n>0)
        {
            ll val = n%26;
                n = n/26;
            if(val==0)
            {
                ans.push_back('Z');
                n--;
            }
            else
            {
                char ch ='A' + val -1;
                ans.push_back(ch);
            }
        }
       
        reverse(ans.begin() ,ans.end());
        return ans;
    }
};