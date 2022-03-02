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
        ll a[n],sum;
        cout<<"? "<<1<<" "<<n<<"\n";
        cout.flush();cin>>sum;
        for(i=n-1;i>1;--i){
            cout<<"? "<<1<<" "<<i<<"\n";
            cout.flush();cin>>z;
            a[i]=sum-z;
            sum=z;
        }
        cout<<"? "<<2<<" "<<3<<"\n";
        cout.flush();cin>>k;
        a[1] = k-a[2];
        a[0] = z-a[1];

        cout<<"! ";
        for(i=0;i<n;++i)cout<<a[i]<<" ";
        
        cout<<"\n";

    }
}
