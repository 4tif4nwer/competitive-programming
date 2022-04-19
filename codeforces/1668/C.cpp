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
    
    //cin>>t;
    z = 1;

    while(t--)
    {
        cin>>n;
        ll a[n];
        for(i=0;i<n;++i)
            cin>>a[i];
        ans = 1e18;
        //vector<ll>
        for(i=-1;i<n;++i){
            k = 0;
            z = 0;
            for(j=i+1;j<n;j++){
                z+=(1+k/a[j]);
                k=(k-k%a[j]+a[j]);
            }
            k = 0;
            for(j = i-1;j>=0;j--){
                z+=(1+k/a[j]);
                k=(k-k%a[j]+a[j]);
            }
            ans = min(ans,z);
        }
        cout<<ans<<"\n";
        
        

    }
}
