#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main()
{
    Fast_io;

    string s;

    ll t=1,z,i,j,n,m,a,h,b,ans,l;
    
    cin>>t;
    
    

    while(t--)
    {
        cin>>n;
        ll k[n];
        ll h[n];

        for(i=0;i<n;++i)
            cin>>k[i];
        for(i=0;i<n;++i)
            cin>>h[i];
        ans = 0;
        ll streak = h[n-1],streakstart = k[n-1];
        for(i=n-2;i>=0;--i)
        {
            z = streak-(streakstart-k[i]);
            if(z<=0)
            {
                m = streak*(streak+1);
                m/=2;
                ans+=m;
                streak = h[i];
                streakstart = k[i];
                continue;
            }

            if(z<h[i]){
                streak+=(h[i]-z);

            }

        }
        m = streak*(streak+1);
        m/=2;ans+=m;
        cout<<ans<<"\n";
    }
}
