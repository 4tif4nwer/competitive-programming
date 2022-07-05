#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);


int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l,r,u,d,backs;
    cin>>t;
        //cout.precision(30);
    bool f;

    while(t--)
    {
        cin>>n;
        vector<ll> a;
        for(i=0;i<n;++i){
            cin>>z;
            f = 0;
            for(j = int(a.size())-1;j>=0;--j){
                if(a[j]==z-1){
                    a[j]+=1;
                    f = 1;
                    break;
                }
            }
            if(f)
                for(k = int(a.size())-1;k>j;--k){
                    a.pop_back();
                }
            else{
                a.push_back(z);
            }
            cout<<a[0];
            for(j=1;j<a.size();++j){
                cout<<"."<<a[j];
            }
            cout<<"\n";
        }
        
    }
}
