#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
void yesorno(bool f){
    if(f)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return;
}

int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,q,h,b,ans,l,r,u,d,x,y;
    //cin>>t;
        //cout.precision(30);
    bool f;
   
    
    while(t--)
    {   
        
        cin>>n>>q;
        vector<vector<ll>> fix(q,vector<ll> (3,0)),nice(n,vector<ll> (2,0)),adj(n,vector<ll>(0));
        vector<ll> ans(n),curr(n);
        

        for(i=0;i<q;++i){
            cin>>x>>y;
            fix[i][0] = min(x,y);
            fix[i][1] = max(x,y);
            adj[fix[i][0]-1].push_back(fix[i][1]-1);
            adj[fix[i][1]-1].push_back(fix[i][0]-1);    
            cin>>fix[i][2];
        }

        for(i=0;i<32;++i){
            curr.assign(n,-1);
            nice.assign(n,vector<ll> (2,0));
            for(j = 0;j<q;++j){
                z = fix[j][2]%2;
                fix[j][2]/=2;
                nice[fix[j][0]-1][z]++;
                nice[fix[j][1]-1][z]++;
            }
            for(j=0;j<n;++j){
                if(nice[j][0]){
                    curr[j] = 0;
                }

            }
            /*for(j = 0;j<q;++j){
                z = fix[j][2]%2;
                fix[j][2]/=2;
                if(z){
                    if(curr[fix[j][1]-1]==0){
                        curr[fix[j][0]-1] = 1;
                    }
                    else{
                        //curr[fix[j][0]-1] = -1;
                        curr[fix[j][1]-1] = 1;
                        
                    }
                }
                
            }*/
            for(j=0;j<n;++j){
                if(curr[j]!=-1){
                    continue;
                }

                for(auto &it : adj[j]){
                    if(curr[it]==0 || it==j){
                        curr[j] = 1;
                    }
                }
                if(curr[j]==-1){
                    curr[j] = 0;
                }
            }
            for(j=0;j<n;++j){
                //cout<<i<<"\n";
                if(curr[j]!=0){
                    ans[j]+=(1<<i);
                }
            }


        }
        for(auto &it : ans)cout<<it<<" ";
            cout<<"\n";

    }
    
}
