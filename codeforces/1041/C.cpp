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
        cin>>n>>m>>d;
        vector<pair<ll,ll>> a(n),b;
        for(i=0;i<n;++i){
            cin>>z;
            a[i] = {z,i};
        }

        sort(a.begin(),a.end());
        j = 1e10;
        multiset<pair<ll,ll>> nice;
        ll day =1;
        map<ll,ll> ans;
        multiset<pair<ll,ll>> :: iterator itr;
        for(i=0;i<n;++i){
            //cout<<j<<endl;
            if(j>(a[i].first-d-1)){
                nice.insert({a[i].first,i});
                ans[i] = day;
                day++;
                j = (*(nice.begin())).first;
                continue;
            }

            itr = nice.begin();
            ans[i]= ans[(*itr).second];
            nice.erase(itr);
            nice.insert({a[i].first,i});
            j = (*(nice.begin())).first;

        }
        for(i=0;i<n;++i){
            b.push_back({a[i].second,ans[i]});
        }
        sort(b.begin(),b.end());

        cout<<nice.size()<<"\n";
        for(i=0;i<n;++i){
            cout<<b[i].second<<" ";
        }
        cout<<"\n";
    }
}
