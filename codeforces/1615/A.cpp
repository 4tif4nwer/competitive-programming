#include <bits/stdc++.h>
#include<math.h>
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std; 
int main() 
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,a,h,b,ans;
    
    cin>>t;


    while(t--)
    {
        cin>>n;
        ll a[n];
        j=0;
        for(i=0;i<n;++i)
        {    cin>>a[i];
            j+=a[i];
        }
        if(j%n==0)
            cout<<0;
        else
            cout<<1;
        cout<<"\n";
        
        
        
    }
}