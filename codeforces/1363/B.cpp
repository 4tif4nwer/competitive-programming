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
        cin>>s;
        n = s.size();
        ll z[n]={0},o[n]={0};
        if(s[0]=='0')
            z[0]++;
        else
            o[0]++;
        for(i=1;i<n;++i){
            if(s[i]=='0')
                z[i]=1;
            else
                o[i]=1;
            z[i]+=z[i-1];
            o[i]+=o[i-1];
        }
        ans = min(z[n-1],o[n-1]);
        for(i=0;i<n-1;++i){
            ans = min(ans,o[i]+z[n-1]-z[i]);
        }
        for(i=0;i<n-1;++i){
            ans = min(ans,z[i]+o[n-1]-o[i]);
        }
        cout<<ans<<"\n";

    }
}
