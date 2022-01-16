#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
int dis(ll a,ll b,ll c,ll d){
    return(abs(a-c)+abs(b-d));
}
int maxdis(ll n,ll m, ll x,ll y){
    return max(dis(1,1,x,y),max(dis(n,m,x,y),max(dis(1,m,x,y),dis(n,1,x,y))));
}

int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l;
    
    cin>>t;


    while(t--)
    {
        //char p;
        cin>>n>>m;
        vector<ll> nice;
        for(i=1;i<=n;++i)
            for(j=1;j<=m;++j){
                nice.push_back(maxdis(n,m,i,j));
            }
        sort(nice.begin(),nice.end());

        for(auto &it : nice)
            cout<<it<<" ";
        cout<<"\n";


    }
}
