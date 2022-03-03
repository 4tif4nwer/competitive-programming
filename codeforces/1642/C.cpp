#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,h,b,ans,l,x;
    
    cin>>t;


    while(t--)
    {
        cin>>n>>x;ll a[n];
        multiset<ll> nice;
        for(i=0;i<n;++i){
            cin>>a[i];
            
        }
        sort(a,a+n);
        multiset<ll> :: iterator itr;

        for(i=0;i<n;++i){
            if(a[i]%x){
                nice.insert(a[i]);
                continue;
            }
            itr = nice.find(a[i]/x);
            if(itr == nice.end()){
                nice.insert(a[i]);
                continue;
            }
            nice.erase(itr);
        }

        cout<<nice.size()<<"\n";

    }
}
