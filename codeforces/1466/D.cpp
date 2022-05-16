#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l,u,v;
    
    cin>>t;
        //cout.precision(30);

    bool f ;
    while(t--)
    {
        cin>>n;

        vector<pair<ll,ll>> a;
        m=0;
        for(i=0;i<n;++i){
            cin>>z;
            m+=z;
            a.push_back({z,i});
        }
        vector<vector<ll>> nice(n);
        set<pair<ll,ll>> vnice;
        for(i=0;i<n-1;++i){
            cin>>u>>v;
            nice[u-1].push_back(v-1);
            nice[v-1].push_back(u-1);
            vnice.insert({u-1,v-1});
        }
        sort(a.begin(), a.end());
        //m-=a[n-1].first;
        vector<ll> b,op;
        b.push_back(m);
        for(i=n-1;i>=0;--i){
            //m-=a[i].first;
            z = m;
            for(auto &it : nice[a[i].second]){
                z+=a[i].first;
                op.push_back(z);
            }
            m = z-a[i].first;
            for(j=1;j<op.size();++j)
                b.push_back(op[j-1]);
            op.clear();
        }
        
        for(i=0;i<n-1;++i){
            //z+=b[i];
            cout<<b[i]<<" ";
        }
        cout<<"\n";
    }
}
