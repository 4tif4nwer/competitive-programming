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
        cin>>n>>k>>backs;

        vector<ll> a(n),rsum(n);
        z=0;
        for(i=0;i<n;++i){

            cin>>a[i];
            z+=a[i];
            rsum[i] = z;
        }
        set<pair<ll,pair<ll,ll>>> nice;
        set<pair<ll,pair<ll,ll>>> :: reverse_iterator itr;
        for(i=0;i<k;++i){
            nice.insert({a[i]+a[i+1],{i,i+1}});
        }
        ans = 0;
        ll finalans;
        for(i=0;i<=k;++i){
            ans+=a[i];
        }
        finalans = ans;
        ll last = k;
        for(i=1;i<=backs;++i){
            //cout<<finalans<<"\n";
            if(last>1){
                nice.erase({a[last-1]+a[last],{last-1,last}});
                itr = nice.rbegin();
                z = (*itr).first;
                finalans = max(finalans,rsum[last-1]+a[last-2] + (i-1)*z);
                nice.insert({a[last-1]+a[last],{last-1,last}});
            }
            if(last>2){
                nice.erase({a[last-1]+a[last],{last-1,last}});
                last--;
                nice.erase({a[last-1]+a[last],{last-1,last}});
                last--;
                itr = nice.rbegin();
                z = (*itr).first;
                //cout<<z<<"\n";
                finalans = max(finalans,rsum[last] + (i)*z);
                   
            }
            else{
                nice.erase({a[last-1]+a[last],{last-1,last}});
                last--;
                nice.erase({a[last-1]+a[last],{last-1,last}});
                last--;

            }

        }
        cout<<finalans<<"\n";
        
    }
}
