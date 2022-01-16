#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,a,h,b,ans,l;
    
    //cin>>t;


    while(t--)
    {
        cin>>n>>l>>k;
        int d[n+1],val[n];
        for(i=0;i<n;++i)
            cin>>d[i];
        d[n]=l;
        for(i=0;i<n;++i)
            cin>>val[i];

        if(n==1){
            cout<<l*val[0];
            continue;
        }
        vector<vector<ll>> dp(n + 1, vector<ll>(k + 1,1e10));

        dp[0][0]=0;

        for(i=1;i<=n;++i)
        {
            for(j=0;j<=k;++j){

                for(z = i-1;z>=0;--z){
                    b = j-(i-1-z);
                    if(b>=0)
                        dp[i][j] = min(dp[i][j],dp[z][b] + val[z]*(d[i]-d[z]));
                }
            }
        } 
        ans = 1e10;
        for(i=0;i<=k;++i)
            ans = min(ans,dp[n][i]);
        cout<<ans<<"\n";       
        
        
    }
}

// This code is contributed by Debojyoti Mandal
