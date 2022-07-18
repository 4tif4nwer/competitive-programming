#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
void yesorno(bool f){
    if(f)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return;
}
int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l,r,u,d;
    cin>>t;
        //cout.precision(30);
    bool f;
   
    while(t--)
    {   
        f = 1;
        cin>>n;
        vector<ll> a(n);
        vector<vector<ll>> colors = vector<vector<ll>>(n);
        
        for(i=0;i<n;++i){
            cin>>a[i];
            colors[a[i]-1].push_back(i);
        }
        for(i=0;i<n;++i){
            ans = 0;

            if(colors[i].size()){
                ans = 1;
                k = colors[i][0];
            }
            for(j=1;j<colors[i].size();++j){
                if((colors[i][j]-k)%2){
                    ans++;
                    k = colors[i][j];
                }

            }
            cout<<ans<<" ";
        }
        cout<<"\n";

        
    }
    
}
