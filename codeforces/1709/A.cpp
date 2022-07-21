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

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l,r,u,d,x,y;
    cin>>t;
        //cout.precision(30);
    bool f;
   
    while(t--)
    {   
        cin>>n;
        vector<ll> a(3);
        for(i=0;i<3;++i){
            cin>>a[i];
        }
        f = 0;
        if(a[n-1]==0){
            f = 0;
        }
        else{
            n = a[n-1];
            if(a[n-1]==0)
                f = 0;
            else{
                f=1;
            }
        }
        yesorno(f);
    }
    
}
