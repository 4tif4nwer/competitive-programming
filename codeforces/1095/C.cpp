#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l;
    
    //cin>>t;


    while(t--)
    {
        cin>>n>>k;
        j = 0;
        m = n;
        multiset<ll> nice;
        while(n>0){
            if(n%2)
                nice.insert(1<<j);
            n/=2;
            j++;

        }
        if(k<nice.size()|| k>m){
            cout<<"NO\n";
            continue;
        }
        multiset<ll> :: iterator itr;
        while(k!=nice.size()){
            itr = --nice.end();
            if((*itr)==1)
                break;
            else
            {
                z = *itr;
                z/=2;
                nice.erase(itr);
                nice.insert(z);
                nice.insert(z);
            }
        }
        cout<<"YES\n";
        for(auto &it : nice)
            cout<<it<<" ";
        cout<<"\n";

    }
}
