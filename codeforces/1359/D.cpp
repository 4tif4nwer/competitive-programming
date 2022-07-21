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
vector<ll> a;
ll ans;
void yesorno(bool f){
    if(f)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return;
}
//ll i;
ll doit(ll l,ll r,ll z){
    //cout<<z<<"\n";
    if(l>=r)
        return 0;
    ll maxsum = 0;
    ll currsum = 0;
    for(ll i=l;i<=r;++i){
        currsum+=a[i];
        if(a[i]>z)
            currsum = 0;
        maxsum = max(maxsum,currsum);
        if(currsum<0)
            currsum=0;
    }
    return maxsum;
}
int main()
{
    //Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,h,b,l,r,u,d;
    //cin>>t;
        //cout.precision(30);
    bool f;
   
    while(t--)
    {   
        cin>>n;
        a.clear();
        //vector<ll> a;
        for(i=0;i<n;++i){
            cin>>z;
            a.push_back(z);
        }
        ans = 0;

        
        for(i=30;i>0;--i){
            ans = max(ans,doit(0,n-1,i)-i);
            //cout<<ans<<endl;
        }
        cout<<ans;

        
    }
    
}
