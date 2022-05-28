#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);


int main()
{
    //Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l,r,x,y;
    
    //cin>>t;
        //cout.precision(30);
    bool f;

    while(t--)
    {
        cin>>n;
        ll a[n];
        ll b[n];
        for(i=0;i<n;++i)cin>>a[i];
        for(i=0;i<n;++i)cin>>b[i];

        ll mod = 998244353;
        
        for(i=0;i<n;++i)
        {
            a[i]  = a[i]*(i+1)*(n-i);
        }
        sort(a,a+n);
        sort(b,b+n);
        ans = 0;
        for(i=0;i<n;++i){
            a[i]%=mod;
            ans+=((a[i]*b[n-i-1])%mod);
            ans%=mod;
        }

        cout<<ans<<"\n";
    }
}
