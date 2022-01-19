#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);


int main()
{
    //Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,x,h,y,ans,l;
    
    //cin>>t;
    
    

    while(t--)
    {
        
        cin>>n;
        ll a[n];
        
        for(i=0;i<n;++i){
            cin>>a[i];
            
        }

        vector<pair<ll,ll>> nice;
        x = 0;
        ans = 0;
        for(i=1;i<n;++i){
            if(a[i]<=a[i-1]){
                nice.push_back({x,i-1});
                ans = max(ans,(i-x));
                x = i;
            }
        }
        //cout<<"jaja";
        nice.push_back({x,n-1});
        ans = max(ans,(n-x));
        
        //cout<<nice.size()<<endl;


        for(i=0;(i+1)<nice.size();++i){
            if(nice[i+1].second>nice[i+1].first){
                if(a[nice[i].second]<a[nice[i].second+2]  ){
                    ans = max(ans, nice[i].second-nice[i].first+1 + nice[i+1].second-nice[i+1].first);
                }
            }
            if(nice[i].second>nice[i].first){
                if(a[nice[i+1].first-2]<a[nice[i+1].first]){

                    ans = max(ans, nice[i].second-nice[i].first + nice[i+1].second-nice[i+1].first +1);
                }
            }
        }
        cout<<ans<<"\n";
        
    }
}