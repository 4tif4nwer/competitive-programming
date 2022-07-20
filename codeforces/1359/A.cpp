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
        cin>>n;
        cin>>m>>k;
        z = n/k;
        z = min(m,z);
        j = m-z;
        b = j/(k-1);
        if(j%(k-1))
            b++;
        cout<<z-b<<"\n";
        
    }
    
}
