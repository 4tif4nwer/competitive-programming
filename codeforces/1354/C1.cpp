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
        cin>>n;
        double pi = 2 * acos(0.0);
        double ang = (double)(pi/(2*n));
        cout<<fixed<<setprecision(8)<<1/tan(ang)<<"\n";

    }
}
