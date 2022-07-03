#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);


int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l,r,u,d;
    //cin>>t;
        //cout.precision(30);
    bool f;

    while(t--)
    {
        cin>>n>>m;
        vector<ll> a(n),b(n);
        for(i=0;i<n;++i)cin>>a[i];
        cin>>k;
        for(i=0;i<n;++i)cin>>b[i];
        f = 1;
        ans=0;

        multiset<ll> nice;
        for(i=0;i<n;++i){
            nice.insert(b[i]);
            while(m<a[i]){
                if(!nice.size()){
                    f = 0;
                    break;
                }
                z = *(nice.begin());
                nice.erase(nice.begin());
                ans+=z;
                m+=k;
            }
        }
        if(!f){
            cout<<"-1\n";
        }
        else
            cout<<ans<<"\n";
        

    }
}
