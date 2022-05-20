#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l,r,x,y;
    
    cin>>t;
        //cout.precision(30);
    bool f;

    while(t--)
    {
        cin>>n>>k;
        ll a[n];
        ans = 0;
        for(i=0;i<n;++i){
            cin>>a[i];
            ans+=a[i];
            a[i] +=i;
        }
        sort(a,a+n);
        vector<ll> nice;
        j = 1;
        while(k--){
            nice.push_back(a[n-j]);
            j++;
        }
        k = nice.size();
        while(n-k>(nice[k-1])){
            
            nice.pop_back();
            k--;
            if(k==0)
                break;
        }
        j = 0;
        for(auto &it : nice){
            ans-=(it+k-n);
            ans+=j;
            j+=1;
        }
        cout<<ans<<"\n";

        
        

        
    }
}
