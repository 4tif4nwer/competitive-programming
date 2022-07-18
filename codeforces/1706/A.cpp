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

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l,r,u,d;
    cin>>t;
        //cout.precision(30);
    bool f;
   
    while(t--)
    {   
        f = 1;
        cin>>n>>m;
        vector<ll> a(n);
        for(i=0;i<n;++i){
            cin>>a[i];
        }
        s = "";
        for(i=0;i<m;++i)
            s+="B";
        for(i=0;i<n;++i){
            z = min(a[i],m+1-a[i]);
            k = m+1;
            if(s[z-1]=='B')
                s[z-1] = 'A';
            else
                s[k-z-1] = 'A';
        }
        cout<<s<<"\n";
        
    }
    
}
