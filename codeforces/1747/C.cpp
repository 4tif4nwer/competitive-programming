#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
void yesorno(bool f){
    if(f)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return;
}

int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,q,c,h,b,ans,l,r,u,d,x,y;
    cin>>t;
        //cout.precision(30);
    bool f;
   
    
    while(t--)
    {   
        
        cin>>n;
        vector<ll> a(n);
        k = 1e10;
        for(i=0;i<n;++i){
            cin>>a[i];
            k = min(a[i],k);
        }
        f = 1;
        if(k==a[0])
            f = 0;
        
        if(f)
            cout<<"Alice\n";
        else
            cout<<"Bob\n";



    }
    
}
