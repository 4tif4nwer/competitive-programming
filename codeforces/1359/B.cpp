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

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l,r,u,d,x,y;
    cin>>t;
        //cout.precision(30);
    bool f;
   
    while(t--)
    {   
        f = 1;
        cin>>n>>m>>x>>y;
        vector<string> a(n);
        for(i=0;i<n;++i){
            cin>>a[i];
        }
        ans = 0;
        for(i=0;i<n;++i){
            for(j=0;j<m;j++){
                //cout<<ans<<endl;
                if(a[i][j]=='.'){
                    if(j<m-1){
                        if(a[i][j+1]=='.'){
                            ans+=min(y,2*x);
                            j++;
                        }
                        else{
                            ans+=x;
                            j++;
                        }
                        
                    }
                    else{
                        ans+=x;
                        j++;
                    }
                }
            }
            
        }
        cout<<ans<<"\n";
        
    }
    
}
