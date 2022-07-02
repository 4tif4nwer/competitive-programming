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
        cin>>n>>k;
        if(k<n-1 && k>0){
            cout<<k<<" "<<n-1<<"\n";
            cout<<0<<" "<<n-k-1<<"\n";
            for(i=1;i<n/2;++i){
                if(i!=k && i!=n-k-1)
                    cout<<i<<" "<<n-i-1<<"\n";
            }
        }
        else if(k==0){
            for(i=0;i<n/2;++i){
                cout<<i<<" "<<n-i-1<<"\n";
            }
        }
        else{
            if(n<8)
                cout<<"-1\n";
            else{
                cout<<n-1<<" "<<n-2<<"\n";
                cout<<0<<" "<<n-3-1<<"\n";
                cout<<1<<" "<<3<<"\n";
                for(i=2;i<n/2;++i){
                    if(i!=3)
                        cout<<i<<" "<<n-1-i<<"\n";
                }
            }
        }

    }
}
