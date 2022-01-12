#include <bits/stdc++.h>
#include<math.h>
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std; 
int main() 
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,a,h,b,ans;
    
    cin>>t;


    while(t--)
    {
        cin>>n>>k;

        ll a[n];
        for(i=0;i<n;++i)
            cin>>a[i];
        int x[k]={0};
        j=k;
        ans=0;
        
        
        while(j--){
            ll zer,one;
            zer = one = 0;
            for(i=0;i<n;++i)
            {
                if(a[i]%2)
                    one++;
                else
                    zer++;
                a[i]/=2;
            }
            if(one>zer)
                ans+=(1<<(k-j-1));



        }
        cout<<ans<<"\n";
        
        
        
    }
}