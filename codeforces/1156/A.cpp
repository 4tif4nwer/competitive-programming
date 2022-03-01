#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l;
    
    //cin>>t;


    while(t--)
    {
        cin>>n;
        ll a[n];
        for(i=0;i<n;++i)cin>>a[i];
        ans =0;
        for(i=1;i<n;++i){
            if(a[i]==1){
                if(a[i-1]==2)
                    ans+=3;
                else
                    ans+=4;
            }
            else if(a[i]==2){
                if(a[i-1]==1)
                    ans+=3;
                else{
                    ans=-1;
                    break;
                }
            }
            else
            {
                if(a[i-1]==1)
                    ans+=4;
                else{
                    ans=-1;
                    break;
                }
            }
        }
        if(ans==-1){
            cout<<"Infinite\n";
            continue;
        }
        else
            cout<<"Finite\n";
        for(i=0;i<n-2;++i){
            if(a[i]==3&&a[i+1]==1&&a[i+2]==2){
                ans--;
            }
        }
        cout<<ans<<"\n";
    }
}
