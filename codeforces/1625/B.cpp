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
        for(i=0;i<n;++i)
            cin>>a[i];

        map<int,int> nice;
        ans = 0;
        for(i=0;i<n;++i)
        {
            if(nice[a[i]] == 0)
                nice[a[i]]=(i+1);

            else
            {
                ans = max((nice[a[i]] + n-i-1),ans);
                nice[a[i]]=(i+1);
            }
        }
        if(ans==0)
            cout<<-1;
        else
            cout<<ans;
        cout<<"\n";

        
        
        
    }
}