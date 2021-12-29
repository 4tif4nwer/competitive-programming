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
        ll nums[101]={0};
        ans=0;
        map <ll,ll> ok;
        for(i=0;i<n;++i){
            cin>>a[i];
            if(a[i]<0)
                a[i]=-a[i];
            nums[a[i]]++;

        }
        for(i=0;i<101;++i)
        {

            if(nums[i]>0)
                ans++;
            if(nums[i]>1 && i>0)
                ans++;
        }
        cout<<ans<<"\n";


        
        
    }
}