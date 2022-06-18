#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);


int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l,r,x,y;
    cin>>t;
        //cout.precision(30);
    bool f;

    while(t--)
    {
        cin>>n;
        ll a[n],b[n];
        for(i=0;i<n;++i){
            cin>>a[i];
            b[i] = i+1;

        }
        if(n==1){
            cout<<"-1\n";
            continue;
        }
        for(i=0;i<n-1;++i)
            if(a[i]==b[i]){
                swap(b[i],b[i+1]);
            }
        if(a[n-1]==b[n-1]){
            swap(b[n-1],b[n-2]);
        }
        for(i=0;i<n;++i){
            cout<<b[i]<<" ";
        }
        cout<<"\n";

    }
}
