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


    while(t--)
    {
        cin>>n;
        m = n;
        set<ll> nice;
        nice.insert(1);
        nice.insert(0);
        nice.insert(n);
        
        z = n;
        
        while(z>1){
            l = 1;r = n;
            while(l<r){
                k = (l+r)/2;
                if(n/k<z)
                    r = k;
                else
                    l = k+1;

            }
            z = n/r;
            nice.insert(n/r);
        }

        cout<<nice.size()<<"\n";
        for(auto &it : nice)
            cout<<it<<" ";
        cout<<"\n";

    }
}
