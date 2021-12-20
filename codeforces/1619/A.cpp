#include <bits/stdc++.h>
#include<math.h>

#define ll long long

#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

using namespace std; 


int main() 
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,a,h,b;
    
    cin>>t;


    while(t--)
    {
        cin>>s;
        n = s.length();
        if(n%2)
        {
            cout<<"NO\n";
            continue;
        }
        

        if(s.substr(0,n/2)!=s.substr(n/2,n))
        {
            cout<<"NO\n";
        }
        else
            cout<<"YES\n";
        
        
        
    }
}