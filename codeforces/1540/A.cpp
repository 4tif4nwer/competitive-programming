#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l;
    
    cin>>t;


    while(t--)
    {
        cin>>n;
        ll a[n];
        for(i=0;i<n;++i){
            cin>>a[i];

        }
        sort(a,a+n);
        ll b[n-1],c[n-1];
        ans = 0;
        for(i=1;i<n;++i){
            b[i-1] = a[i]-a[i-1];
            ans+=b[i-1];
            c[i-1] = b[i-1];

        }
        k = c[n-2];
        for(i=n-3;i>=0;--i){
            c[i] +=c[i+1];
            k+=c[i];

        }
        //cout<<ans<<" "<<k<<endl;
        z = 0;
        m = n;
        for(i=n-2;i>=0;--i){
            ans-=(k-z*m);
            k-=(z*m);
            z = b[i];
            m--;
        }
        cout<<ans<<"\n";


    }
}
