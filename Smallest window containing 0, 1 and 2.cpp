// User function Template for C++

class Solution {
  public:
   bool check(int a , int b , int c){
             if(a>0 && b>0 && c>0)
                return 1;
            return 0;
         }
    int smallestSubstring(string s) {
        // Code here
        int n = s.size();
        int i , j, a,b,c;
        i= j = a =b=c = 0;
        int ans = INT_MAX;
        while(j <  n)
         {
             if(s[j]=='0') a++;
             else if(s[j]=='1') b++;
             else  c++;
             while(check(a,b,c))
             {
                 if(s[i]=='0') a--;
                 else if(s[i]=='1') b--;
                 else  c--;
                 ans = min(ans , j-i+1);
                 i++;
             }
             j++;
             
         }
         return ans==INT_MAX?-1:ans;
    }
};