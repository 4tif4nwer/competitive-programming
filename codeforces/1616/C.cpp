#include <bits/stdc++.h>
#include<math.h>
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std; 
int main() 
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,h,b,ans;
    
    cin>>t;


    while(t--)
    {
        cin>>n;
        ll a[n];
        //map<ll,ll> cd;
        for(i=0;i<n;++i)
            cin>>a[i];
        ans = n-1;
        ll ok[n][n];
        for(i=0;i<n;++i)
            for(j=0;j<n;++j)
                ok[i][j]=0;
        for(i=0;i<n-1;++i){
            for(j=i+1;j<n;++j){
                z = a[j]-a[i];
                h = j-i;
                
                

                for(k = i;k<n;k++){
                    if(  ( (k-i)*(z) ) % (h) )
                        continue;

                    b = ( (k-i)*(z) ) /h;
                    if(a[i]+b==a[k])
                        ok[i][j]++;
                }
                
            }
        }
        for(i=0;i<n;++i){
            for(j=0;j<n;++j){
                //cout<<ok[i][j]<<" ";
                if(n-ok[i][j]<ans){
                    ans = n-ok[i][j];
                }
            }
            //cout<<"\n";
        }
        cout<<ans<<"\n";

        
    }
}