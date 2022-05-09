#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

ll dis(ll i, ll j){
    return(abs(i-j));
}
int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l,r;
    
    cin>>t;
    z = 1;

    while(t--)
    {
        cin>>n;ll a[n];
        ll H = 0;
        for(i=0;i<n;++i){
            cin>>a[i];
            H = max(H,a[i]);
        }
        ans = H*n;
        ll currans;
        for(j = H;j<=H+3;++j){
            currans = 0;
            ll one=0,two=0;
            for(i=0;i<n;++i){
                two+=((j-a[i])/2);
                if((j-a[i])%2==1)one++;
                
            }
            
            if(two>one){
                z = two-one;
                z/=3;
                two-=z;
                one+=(2*z);
            }
            while(two>one+1){
                two-=1;
                one+=2;
            }
            if(two==one+1){
                currans+=(2*two);
                one = two = 0;
            }

            else if(one>two){
                currans+=(2*one-1);
                //currans--;
            }
            else
                currans+=(2*one);

            ans = min(ans,currans);
        }
        cout<<ans<<"\n";
    }
}
