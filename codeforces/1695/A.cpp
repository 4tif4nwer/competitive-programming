#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);


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
        cin>>n>>m;
        ll a[n][m];

        for(i=0;i<n;++i){
            for(j=0;j<m;++j)
                cin>>a[i][j];
        }
        l = r = 0;
        for(i=0;i<n;++i){
            for(j=0;j<m;++j){
                if(a[i][j]>a[l][r]){
                    r = j;
                    l = i;
                }
            }
        }
        z = max((l+1),(n-l));
        k = max(r+1,m-r);
        ans = z*k;
              

        cout<<ans<<"\n";


    }
}
