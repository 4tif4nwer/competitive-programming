#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,l;
    
    //cin>>t;
        //cout.precision(30);


    while(t--)
    {
        cin>>n;

        ll a[n];
        for(i=0;i<n;++i)cin>>a[i];
        bool bad = 0;
        map<ll,ll> enter,exit,current;
        ll s=0;
        vector<ll> ans;
        j=0;
        for(i=0;i<n;++i){
            j++;
            bool f = 0;
            if(a[i]>0){
                if(enter.find(a[i])!=enter.end())
                    f = 1;
                else{
                    current.insert({a[i],1});
                    enter.insert({a[i],1});
                    s++;
                }

            }
            else{
                if(enter.find(-a[i])==enter.end()||exit.find(-a[i])!=exit.end()){
                    bad = 1;
                    break;
                }
                
                exit.insert({-a[i],1});
                current.erase(current.find(-a[i]));
                s--;
            }
            if(f==1 && current.size()!=0)
            {
                bad = 1;
                break;
            }
            if(current.size()==0){
                ans.push_back(j);
                j=0;
                enter.clear();
                exit.clear();
                current.clear();
            }
        }
        if(bad||current.size()!=0)
            cout<<"-1\n";
        else{
            cout<<ans.size()<<"\n";
            for(auto &it : ans){
                cout<<it<<" ";

            }
            cout<<"\n";
            

        }
    }
}
