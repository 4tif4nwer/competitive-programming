#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);


int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l,r,u,d;
    cin>>t;
        //cout.precision(30);
    bool f;

    while(t--)
    {
        cin>>n>>m;
        vector<pair<ll,pair<ll,ll>>> nice;
        while(n--){
            cin>>i>>j>>k;
            nice.push_back({i,{j-m,k-m}});
        }
        l = 0;
        r = 0;
        j =0;
        f = 1;
        for(i=0;i<nice.size();++i){
            k = nice[i].first-j;
            l-=k;
            r+=k;
            j = nice[i].first;
            l = max(l,nice[i].second.first);
            r = min(r,nice[i].second.second);
            if(r<l){
                f = 0;
                break;
            }


        }
        if(!f)
            cout<<"NO\n";
        else
            cout<<"YES\n";
        
    }
}
