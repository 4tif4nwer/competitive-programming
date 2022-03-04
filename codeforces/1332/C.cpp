#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l;
    
    cin>>t;


    while(t--)
    {
        cin>>n>>k;
        cin>>s;
        z = k/2;
        if(k%2)
            z++;
        b = n/k;
        vector<vector<ll>> nice (z,vector<ll>(26,0));
        
        for(j=0;j<n;j+=k){
            for(i=j;i<j+k;++i){

                m = min(i-j,j+k-i-1);//cout<<m<<endl;
                nice[m][s[i]-'a']++;
            }
        }
        ans = 0;
        for(i=0;i<z;++i){
            ll best = -1;
            for(j=0;j<26;++j){
                best = max(best,nice[i][j]);
            }
            h = 2;
            if(k%2 && i==z-1)
                h=1;
            ans+=(b*h-best);

        }

        cout<<ans<<"\n";


    }
}
