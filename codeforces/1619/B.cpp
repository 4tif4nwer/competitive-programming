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
    set<ll> ok;
    for(i=1;i<100000;++i){
        ok.insert(i*i*i);
        ok.insert(i*i);
    }


    while(t--)
    {
        cin>>n;
        j=0;
        for(auto &it : ok){
            if(it>n)
                break;
            j++;
        }
        cout<<j<<"\n";
        
        
        
    }
}