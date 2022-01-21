#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);


int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,x,h,y,ans,l;
    
    //cin>>t;
    //cout.precision(30);
    
    

    while(t--)
    {   
        cin>>n;
        int a[n]={0};
        map<int,int> nice;
        for(i=0;i<n;++i){
            cin>>s;
            for(j=0;j<s.size();++j){
                if(a[i]<0)
                    break;
                if(s[j]=='(')
                    a[i]++;
                else
                    a[i]--;
            }
            if(a[i]<0){
                a[i]=0;
                //cout<<"haha\n";
                for(j=int(s.size())-1;j>=0;--j){
                    if(a[i]<0)
                        break;
                    if(s[j]==')')
                        a[i]++;
                    else
                        a[i]--;
                }
                if(a[i]<0)
                    continue;
                else
                    nice[-a[i]]++;
            }
            else
                nice[a[i]]++;
        }
        
        ans = 0;
        for(auto &it : nice){
            i = it.first;
            ans+=min(nice[i],nice[-i]);
        }
        ans-=nice[0];
        ans/=2;
        ans+=(nice[0])/2;
        cout<<ans<<"\n";

    }
}