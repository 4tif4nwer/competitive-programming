#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l,r;
    
    cin>>t;
        //cout.precision(30);
    bool f;

    while(t--)
    {
        cin>>n;
        cin>>s;
        set<pair<ll,ll>> nice;
        map<pair<ll,ll>,ll> ok;
        nice.insert({0,0});
        ok.insert({{0,0},-1});
        ll x = 0,y = 0;
        f = 0;
        ll minlen = n+1;

        for(i=0;i<n;++i){
            if(s[i]=='L')
                x-=1;
            else if(s[i]=='R')
                x+=1;
            else if(s[i]=='U')
                y+=1;
            else
                y-=1;
            if(ok.find({x,y})!=ok.end()){
                f = 1;
                z = i-ok.at({x,y});
                if(z < minlen){
                    a = ok.at({x,y});b = i;
                    minlen = z;
                }
                ok.find({x,y})->second = i;
                continue;
            }
            ok.insert({{x,y},i});
        }
        if(!f){
            cout<<-1<<"\n";
            continue;
        }
        
        cout<<a+2<<" "<<b+1<<"\n";


        
    }
}
