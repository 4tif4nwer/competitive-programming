#include <bits/stdc++.h>
#include<math.h>
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std; 
int main() 
{
    Fast_io;

    string s;

    int t=1,k,z,i,j,n,a,h,b,ans;
    
    cin>>t;


    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;++i)
            cin>>a[i];

        cin>>s;
        pair<int,int> nice[n];
        for(i=0;i<n;++i){
            nice[a[i]-1] = make_pair(int(s[i]-'0'),i+1);

        }
        j=1;
        set<pair<int,int>> ok;
        for(i=0;i<n;++i)
            if(nice[i].first==0){
                
                ok.insert(make_pair(nice[i].second,j++));
            }
        for(i=0;i<n;++i)
            if(nice[i].first==1)
                ok.insert(make_pair(nice[i].second,j++));
        for(auto &it : ok)
            cout<<it.second<<" ";
        cout<<"\n";

        
        
        
    }
}