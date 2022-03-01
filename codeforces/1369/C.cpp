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
        cin>>n>>k;ll a[n],w[k];
        for(i=0;i<n;++i)cin>>a[i];
        for(i=0;i<k;++i)cin>>w[i];

        sort(a,a+n);
        sort(w,w+k);
        
        ans = 0;
        i = j = 0;
        for(;j<k;j++){
            if(w[j]==1){
                ans+=(2*a[n-i-1]);
                i++;
            }
            else
                break;
            
            
        }
        m = k-1;
        z = 0;
        for(;m>=j;m--){
            ans+=a[z];
            ans+=a[n-i-1];
            i++;
            z+=(w[m]-1);
        }

        



        cout<<ans<<"\n";

    }
}
