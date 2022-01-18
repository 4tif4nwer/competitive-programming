#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);


int main()
{
    Fast_io;

    string s;

    int t=1,k,z,i,j,n,m,x,h,y,ans,l;
    
    cin>>t;
    
    

    while(t--)
    {
        
        cin>>n;
        ll a[n];
        k = 0;
        for(i=0;i<n;++i){
            cin>>a[i];
            k +=a[i];
        }
        m = n;
        while(1){
            z = k/m;
            if(k%m){
                m--;
                continue;
            }
            x = 0;
            for(i=0;i<n;++i){
                x+=a[i];
                if(x==z)
                    x = 0;
                if(x>z)
                    break;
            }
            if(x==0)
                break;
            m--;
        }
        cout<<(n-m)<<"\n";


    }
}