#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);


int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,x,h,y,ans,l;
    
    cin>>t;
    
    

    while(t--)
    {
        cin>>n;
        ll a[n];
        vector<ll> nice(n+3);
        for(i=0;i<n;++i){
            cin>>a[i];
            nice[a[i]]++;
        }
        ans = 0;
        
        
        for(i=1;i<=n;++i){
            
            
            x = nice[i];
            y = nice[i+1];
            z = nice[i+2];

            ans+= ((x*(x-1)*(x-2))/6);
            ans+=(x*y*z);
            ans+=((x*y*(y-1))/2);
            ans+=(x*z*(z-1))/2;
            ans+=(y*x*(x-1))/2;
            ans+=(z*x*(x-1))/2;
        }
        cout<<ans<<"\n";
        
    }
}