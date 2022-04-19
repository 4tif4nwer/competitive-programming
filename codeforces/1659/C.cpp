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
        cin>>n>>a>>b;
        ll A[n];
        k = 0;
        for(i=0;i<n;++i){
            cin>>A[i];
            k+=A[i];
        }
        ans = b*k;
        z = 0;
        for(i=0;i<n;++i){
            z+=A[i];
            ans = min(ans,(a+b)*A[i]+b*(k-z-(n-i-1)*A[i]));
        }
        cout<<ans<<"\n";
        

    }
}
