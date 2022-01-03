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
        cin>>n>>k;
        z = (n+1)/2;
        if(k>z){
            cout<<-1<<"\n";
            continue;
        }
        ll kcount=0;
        for(i=1;i<=n;++i){
            for(j=1;j<=n;++j)
            {
                if(i==j && i%2==1 && kcount<k){
                    cout<<"R";
                    kcount++;
                }
                else
                    cout<<".";
            }
            cout<<"\n";
        
        }
        
    }
}