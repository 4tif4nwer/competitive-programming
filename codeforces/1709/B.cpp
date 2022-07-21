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
    //cin>>t;
        //cout.precision(30);
    bool f;
   
    while(t--)
    {   
        cin>>n>>m;
        vector<ll> a(n),b(n),c(n);
        for(i=0;i<n;++i)cin>>a[i];
        for(i=0;i+1<n;++i){
            if(a[i]>a[i+1])
                b[i] = -a[i+1]+a[i];
        }
        for(i=n-1;i>0;--i){
            if(a[i-1]<a[i])
                c[i]= -a[i-1]+a[i];
        }
        z=0;
        for(i=0;i<n;++i){
            z+=b[i];
            b[i]=z;
            //cout<<b[i];
        }
        z=0;
        //cout<<"\n";
        for(i=n-1;i>=0;--i){
            z+=c[i];
            c[i]=z;
            //cout<<c[i];
        }
        for(i=0;i<m;++i){
            cin>>l>>r;
            if(r>l){
                if(l==1)
                    cout<<b[r-2];
                else
                    cout<<b[r-2]-b[l-2];
            }
            else{
                if(l==n){
                    cout<<c[r];
                }
                else
                    cout<<c[r]-c[l];
            }
            cout<<"\n";
        }
    }
    
}
