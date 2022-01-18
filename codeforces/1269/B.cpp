#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);


int main()
{
    Fast_io;

    string s;

    int t=1,k,z,i,j,n,m,x,h,y,ans,l;
    
    //cin>>t;
    
    

    while(t--)
    {
        cin>>n>>m;
        map <int,int> nicea,niceb;
        ll a[n],b[n];
        for(i=0;i<n;++i){
            cin>>a[i];
            
            nicea[a[i]]++;

        }
        
        for(i=0;i<n;++i){
            cin>>b[i];
            j = b[i];
            
            niceb[b[i]]++;

        }
        
        

        ans = m;

        for(i=0;i<n;++i){
            if(nicea[a[i]]==niceb[j]){
                x = j-a[i];
                if(x<0)
                    x+=m;
                for(k=0;k<n;++k){
                    if(nicea[a[k]]!=niceb[(a[k]+x)%m])
                        break;
                }
                if(k==n)
                {
                    
                    ans = min(ans,x);
                }

            }
        }
        cout<<ans<<"\n";

    }
}