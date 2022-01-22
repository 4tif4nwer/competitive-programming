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
        cin>>x>>y>>k;
        if(x==y && x!=1){
            cout<<"YES\n";
            continue;
        }
        n = y-x+1;
        n/=2;
        if(x%2 && y%2)
            n++;
        if(k<n)
            cout<<"NO\n";
        else
            cout<<"YES\n";



    }
}