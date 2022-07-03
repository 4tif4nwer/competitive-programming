#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);


int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l,r,u,d;
    //cin>>t;
        //cout.precision(30);
    bool f;
    ll mod = 1000000007;

    while(t--)
    {
        cin>>n;
        j = 1;
        k = 1;
        for(i=1;i<=n;++i){
            j*=i;
            if(i>1)
                k*=2;
            j%=mod;
            k%=mod;
        }
        ans = j-k;
        if(ans<0)
            ans+=mod;
        ans%=mod;
        cout<<ans<<"\n";

        

    }
}
