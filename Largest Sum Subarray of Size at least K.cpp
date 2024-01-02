class Solution{
    public:
    using ll = long long int;
    long long int maxSumWithK(long long int arr[], long long int n, long long int k) 
    {
        vector<ll> subb;
        ll sum = 0;
        ll ans = INT_MIN;
        for(ll i = 0 ; i <  n; i++)
        {
            sum +=arr[i];
            subb.push_back(sum);
            // cout<<sum<<" ";
            if(sum <  0)
            sum  =0;
        }
        
        ll j = 0;
        ans = INT_MIN;
        sum = 0;
        while(j < k && j< n)
        {
            sum +=arr[j];
            j++;
        }
        ans = max(sum , ans);
        ll i = 0;
        while(j < n)
        {
            sum +=arr[j++];
            sum -=arr[i];
            ans = max({ans ,sum , sum+ subb[i++]});
        }
        return ans;
        
    }
};