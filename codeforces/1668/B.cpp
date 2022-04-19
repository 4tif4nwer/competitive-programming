#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

ll dis(ll i, ll j){
    return(abs(i-j));
}
int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l,r;
    
    cin>>t;
    z = 1;

    while(t--)
    {
        cin>>n>>m;
        ll a[n];
        for(i=0;i<n;++i)
            cin>>a[i];
        sort(a,a+n,greater<int>());

        l = a[0];
        r = a[0];
        ans = l+r+1;
        bool f = 1;
        for(i=1;i<n;++i){
            ans+=(a[i]+1);
            if(f){
                r = a[i];
                f = 0;
            }
            else{
                l = a[i];
                f = 1;
            }
        }
        ans-=(min(l,r));
        if(ans<=m)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        //cout<<ans<<"\n";
        

    }
}
