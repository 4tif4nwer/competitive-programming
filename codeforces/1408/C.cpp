#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);


int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,x,h,y,ans,l;
    
    cin>>t;
    cout.precision(30);
    
    

    while(t--)
    {   
        cin>>n>>l;
        ll a[n+2];
        a[0]=0;a[n+1]=l;
        for(i=1;i<=n;++i)cin>>a[i];

        double c1[n+2],c2[n+2];
        c1[0]=c2[n+1]=0;


        for(i=1;i<(n+2);++i){
            c1[i]=(double)((double)(a[i]-a[i-1])/i);
            c1[i]+=c1[i-1];
            
            c2[n-i+1] = (double)((double)(a[n-i+2]-a[n-i+1])/i);
            c2[n-i+1]+=c2[n-i+2];//cout<<c2[n-i+1]<<" ";
        }
       

        for(i=1;i<(n+2);++i){
            if(c2[i]<=c1[i])
                break;
        }
        double del = c2[i]-c1[i-1];//cout<<del<<"\n";
        del = (double)(del*(n-i+2));
        del = (double)(del+(a[i]-a[i-1]));
        del = (double)(del/(n+2));
        
        cout<<del+c1[i-1]<<"\n";
    }
}