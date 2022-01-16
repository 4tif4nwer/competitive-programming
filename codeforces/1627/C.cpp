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
        cin>>n;
        bool yes = 1;
        vector<pair<ll,ll>> v[n];
        for(i=0;i<n-1;++i){
            cin>>a>>b;
            v[a-1].push_back({i,b-1});
            v[b-1].push_back({i,a-1});
            if(v[a-1].size()==3||v[b-1].size()==3){

                yes = 0;
                
            }
            
        }
        if(!yes)
        {
            cout<<-1<<"\n";
            continue;
        }
        for(i=0;i<n;++i)
            if(v[i].size()==1)
                break;
        j = i;
        
        ll edge[n-1]={0};
        int sw = 1; 
        i = v[i][0].second;
        ll  next;
        while(v[i].size()>1){
            for(auto &it : v[i])
            {
                if(it.second!=j)
                {
                    edge[it.first] = sw;
                    sw = 1-sw;
                    next = it.second;
                    break;

                }
            }
            j = i;
            i = next;


        }
        for(i=0;i<n-1;++i)
        {
            if(edge[i]==1)
                cout<<5;
            else
                cout<<2;
            cout<<" ";


        }
        cout<<"\n";
        



        

    }
}
