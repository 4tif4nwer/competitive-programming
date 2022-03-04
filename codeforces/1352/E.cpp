#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l;
    
    cin>>t;


    while(t--)
    {
        cin>>n;
        ans = 0;

        multiset<int> nice;
        int ok[n+1]={0};

        for(i=0;i<n;++i){
            cin>>k;
            ok[i+1]=k;
            nice.insert(k);
        }
        
        for(i=0;i<n;++i){
            ok[i+1]+=ok[i];
        }
        for(i=0;i<n;++i)
            for(j=i+1;j<n;++j){
                if(nice.find(ok[j+1]-ok[i])!=nice.end())
                    while(nice.find(ok[j+1]-ok[i])!=nice.end()){
                        ans++;
                        nice.erase(nice.find(ok[j+1]-ok[i]));
                    }
            }

        
        cout<<ans<<"\n";

    }
}
