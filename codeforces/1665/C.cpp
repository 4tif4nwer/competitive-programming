#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

ll dis(ll i, ll j){
    return(abs(i-j));
}
int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l,r;
    
    cin>>t;
    z = 1;

    while(t--)
    {
        cin>>n;
        vector<ll> a[n+1];
        for(i=2;i<=n;++i){
            cin>>z;
            a[z].push_back(i);
        }
        vector<ll> ok;
        multiset<ll> nice;
        ok.push_back(1);
        ll count = 1;
        for(i=1;i<=n;++i){
            if(a[i].size())
                count++;
        }
        for(i=1;i<=n;++i){
            if(a[i].size()){
                ok.push_back(a[i].size());
            }
        }
        j = count;
        sort(ok.rbegin(), ok.rend());
        for(auto &it : ok){
            nice.insert(max(0ll,it-j));
            j--;
        }
        ans = 0;
        while(1){
            if(nice.upper_bound(ans)==nice.end())
                break;
            
            j = (*(--nice.end()));
            nice.erase(--nice.end());
            nice.insert(j-1);
            ans++;
        }

        cout<<ans+count<<"\n";
    }
}
