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
        cin>>n>>k;
        for(i=1;i<(2*k-n);++i)cout<<i<<" ";

        for(i=k;i>=(2*k-n);--i)cout<<i<<" ";
            cout<<"\n";
    }
}
