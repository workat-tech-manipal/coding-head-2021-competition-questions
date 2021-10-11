
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    long long int mod=1000000007;
    int countWays(int n)
    {
           int dp[n+1];
           dp[0]=1;     
           dp[1]=1;
           dp[2]=2;
           for(int i=3;i<=n;i++)
           {
               dp[i]=((dp[i-1])%mod+(dp[i-2])%mod)%mod;
           }
           return dp[n];
    }
};


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; 
    }
    return 0;
}
