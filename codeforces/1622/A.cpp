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
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[2] == a[0]+a[1])
            cout<<"YES";
        else if(a[0]==a[1] && a[2]%2==0)
            cout<<"YES";
        else if(a[1]==a[2] && a[0]%2==0)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<"\n";
        
        
        
    }
}