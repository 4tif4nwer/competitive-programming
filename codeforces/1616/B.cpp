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
        cin>>s;
        bool inc = 0;

        for(i=1;i<n;++i){
            if(s[i]>s[i-1])
                break;
            else if(s[i]==s[i-1]){
                if(!inc)
                    break;
            }
            else
                inc=1;


        }
        for(j=0;j<i;++j){
            cout<<s[j];

        }
        j--;
        for(;j>=0;--j)
            cout<<s[j];
        cout<<"\n";
        
        
    }
}