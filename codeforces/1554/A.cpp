
#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long int t=1,k,z,c,i,j,n,m;

    string s;

    

    

    cin>>t;

    while(t--)
    {
        cin>>n;
        long long int a[n],ans=0;;
        set<pair<long long int,long long int>> b;

        for(i=0;i<n;++i)
        {

            cin>>a[i];
            b.insert({a[i],i});

        }

        for(auto &it : b)
        {
            if(it.second==n-1)
            {
                ans = max(ans,a[n-1]*a[n-2]);

            }
            else if(it.second == 0)
            {
                ans = max(ans,a[0]*a[1]);
            }
            else
            {
                ans = max(ans,a[it.second]*a[it.second-1]);
                ans = max(ans,a[it.second]*a[it.second+1]);
                   
            }
        }

        cout<<ans<<"\n";



        

        
    }
}