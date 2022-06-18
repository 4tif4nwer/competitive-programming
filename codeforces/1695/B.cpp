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
        cin>>n;
        ll a[n];
        k = 1e10;
        for (i = 0; i < n; ++i)
        {
            cin>>a[i];
            k = min(k,a[i]);
        }       
        for(i=0;i<n;++i){
            a[i]-=k;
            if(a[i]==0)
                break;
        }

        if((n*k)%2)
            f = 1;
        else
            f = 0;
        if(i%2)
            f = !f;
        if(n%2)
            f = 1;


        if(f)
            cout<<"Mike\n";
        else
            cout<<"Joe\n";


    }
}
