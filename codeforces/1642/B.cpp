#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,h,b,ans,l,h1,h2;
    
    cin>>t;


    while(t--)
    {
        cin>>n;ll a[n];
        set<ll> nice;
        for(i=0;i<n;++i){
            cin>>a[i];
            nice.insert(a[i]);
        }
        ans = nice.size();
        for(i=0;i<nice.size();++i){
            cout<<nice.size()<<" ";
        }
        for(;i<n;++i){
            cout<<++ans<<" ";
        }
        cout<<"\n";
        
        

    }
}
