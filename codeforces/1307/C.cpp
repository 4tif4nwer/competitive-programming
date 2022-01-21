#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);


int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,x,h,y,ans,l;
    
    //cin>>t;
    //cout.precision(30);
    
    

    while(t--)
    {   
        cin>>s;ans = 0;
        n = s.size();
        ll let[26]={0},pr[26][26]={0};
        for(i=0;i<n;++i){
            k = int(s[i]-'a');
            for(j=0;j<26;++j){
                pr[j][k]+=let[j];
            }
            let[k]++;
            ans = max(ans,let[k]);
        }
        for(i=0;i<26;++i)
            for(j=0;j<26;++j)
                ans = max(ans,pr[i][j]);
        cout<<ans<<"\n";
    }
}