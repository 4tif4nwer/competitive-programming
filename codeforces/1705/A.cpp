#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);


int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l,r,u,d,x;
    cin>>t;
        //cout.precision(30);
    bool f;

    while(t--)
    {
        cin>>n>>x;
        vector<ll> a(2*n);
        for(i=0;i<2*n;++i){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        f = 1;
        for(i=0;i<n;++i){
            if(a[i+n]-a[i]<x)
                f = 0;
        }
        if(f)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
