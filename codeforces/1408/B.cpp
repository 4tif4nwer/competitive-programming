#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,h,b,ans,l,h1,h2;
    
    cin>>t;


    while(t--)
    {
        cin>>n>>k;ll a[n];
        for(i=0;i<n;++i)cin>>a[i];
        z = (a[0])?0:1;
        j = 0;
        for(i=1;i<n;++i)
            if(a[i]!=a[i-1])
                j++;
        if(k==1){
            if(j==0)
                cout<<1<<"\n";
            else
                cout<<"-1\n";
            continue;
        }
        if(j+1<=k){
            cout<<1<<"\n";
            continue;
        }
        ans = j/(k-1);
        if(j%(k-1))
            ans++;
        cout<<ans<<"\n";
        

    }
}
