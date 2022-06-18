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
        ll a[n][m];

        for(i=0;i<n;++i){
            for(j=0;j<m;++j)
                cin>>a[i][j];
        }
        z = n+m-1;
        if(z%2){
            cout<<"NO\n";
            continue;
        }
        z/=2;
        
        map<pair<int,int>,pair<int,int>> nice;
        if(a[0][0]==1)
            nice.insert({{0,0},{1,1}});
        else
            nice.insert({{0,0},{0,0}});
        for(i=0;i<n;++i){
            for(j=0;j<m;++j){
                if(i==0&&j==0)
                    continue;
                if(i==0){
                    if(a[i][j]==1){
                        nice.insert({{i,j},{nice[{i,j-1}].first+1,nice[{i,j-1}].second+1}});

                    }
                    else 
                        nice.insert({{i,j},{nice[{i,j-1}].first,nice[{i,j-1}].second}});
                }
                else if(j==0){
                    if(a[i][j]==1){
                        nice.insert({{i,j},{nice[{i-1,j}].first+1,nice[{i-1,j}].second+1}});

                    }
                    else 
                        nice.insert({{i,j},{nice[{i-1,j}].first,nice[{i-1,j}].second}});
                }
                else{
                    if(a[i][j]==1){
                        l = nice[{i-1,j}].first+1;
                        r = nice[{i,j-1}].first+1;
                        l = min(l,r);
                        u = nice[{i-1,j}].second+1;
                        d = nice[{i,j-1}].second+1;
                        u = max(u,d);
                        nice.insert({{i,j},{l,u}});

                    }
                    else{
                        l = nice[{i-1,j}].first;
                        r = nice[{i,j-1}].first;
                        l = min(l,r);
                        u = nice[{i-1,j}].second;
                        d = nice[{i,j-1}].second;
                        u = max(u,d);
                        nice.insert({{i,j},{l,u}});
                    }
                }
            }
        }
        
        l = nice[{n-1,m-1}].first;
        r = nice[{n-1,m-1}].second;
        //cout<<l<<" "<<r<<endl;
        if(z>=l && r>=z)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
