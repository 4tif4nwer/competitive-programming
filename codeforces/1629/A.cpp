#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

bool isprime(ll n){
    ll m = sqrt(n);
    for(ll i=2;i<=m;++i){
        if(n%i==0)
            return false;

    }
    return true;
}
int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,x,h,y,ans,l;
    
    cin>>t;
    //cout.precision(30);
    
    

    while(t--)
    {   
        cin>>n>>k;
        multiset<pair<ll,ll>> nice;
        ll a[n],b[n];
        for(i=0;i<n;++i){
            cin>>a[i];
            //nice.insert({a,-b});


        }
        for(i=0;i<n;++i){
            cin>>b[i];
            nice.insert({a[i],-b[i]});
        }

        for(auto &it : nice){
            if(it.first>k)
                break;
            k-=it.second;

        }
        cout<<k<<"\n";

        

    }
}