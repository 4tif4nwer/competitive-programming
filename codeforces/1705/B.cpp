#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);


int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l,r,u,d;
    cin>>t;
        //cout.precision(30);
    bool f;

    while(t--)
    {
        cin>>n;
        vector<ll> a(n);
        for(i=0;i<n;++i){
            cin>>a[i];
        }
        for(i=0;i<n;++i){
            if(a[i])
                break;
        }
        ans = 0;
        while(i<n-1){
            if(a[i]==0)
                ans++;
            else
                ans+=a[i];
            i++;
        }
        cout<<ans<<"\n";
    }
}
