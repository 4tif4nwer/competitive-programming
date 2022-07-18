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
        vector<ll> a(n);
        for(i=0;i<n;++i){
            cin>>a[i];
        }
        ll c1,c2,j1,j2;
        vector<ll> costs(n);
        c1=c2=j1=j2=0;
        for(i=1;i<n-1;i+=2){
            j1++;
            if(a[i]>a[i-1] && a[i]>a[i+1]){
                costs[i] = c1;
                continue;
            }
            c1+=(max(a[i-1],a[i+1])+1-a[i]);
            costs[i] = c1;


        }
        for(i=2;i<n-1;i+=2){
            j2++;
            if(a[i]>a[i-1] && a[i]>a[i+1]){
                costs[i] = c2;
                continue;
            }
            c2+=(max(a[i-1],a[i+1])+1-a[i]);
            costs[i] = c2;

        }

        if(j1==j2){
            ans = min(c1,c2);
            for(i=1;i<n-1;i+=2){
                ans = min(ans,costs[i]+costs[n-2]-costs[i+1]);
            }
            cout<<ans<<"\n";
        }
        else if(j1>j2)
            cout<<c1<<"\n";
        else
            cout<<c2<<"\n";
        
    }
    
}
