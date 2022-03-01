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
        cin>>n>>m;ll a[n],b[m],loc[n],pos[m];
        ans=0;
        for(i=0;i<n;++i){
            cin>>a[i];
            loc[a[i]-1]=(i);
        }
        for(i=0;i<m;++i){
            cin>>b[i];
            pos[i]=loc[b[i]-1];
        }
        ll last=0;
        for(j=0;j<m;++j){
            if(pos[j]>last){
                ans+=(2*(pos[j]-j)+1);
                last = pos[j];
            }
            else{
                ans++;
                if(pos[j]==last)
                    last++;
            }
        }

        cout<<ans<<"\n";

    }
}
