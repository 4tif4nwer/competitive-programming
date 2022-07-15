#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);


int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l,r,u,d,q,c;
    cin>>t;
        //cout.precision(30);
    bool f;

    while(t--)
    {
        cin>>n>>c>>q;
        vector<pair<ll,ll>> a(c);
        cin>>s;
        for(i=0;i<c;++i){
            cin>>a[i].first>>a[i].second;
        }
        while(q--){
            cin>>z;
            
            while(z>n){
                k = n;
                for(i = 0;i<c;++i){
                    
                    k+=(a[i].second-a[i].first+1);
                    if(z<=k)
                        break;
                }
                z = a[min(i,c-1)].second-(k-z);
                //cout<<z<<"\n";
            }
            cout<<s[z-1]<<"\n";
        }
    }
}
