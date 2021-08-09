
#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long int t=1,k,z,c,i,j,n,m,klol;

    string s;

    

    

    cin>>t;

    while(t--)
    {
        

        

        cin>>n>>k;
        long long int a[n];
        j=0;

        set<pair<long long int,long long int>> nice;

        for(i=0;i<n;++i)
        {
            cin>>a[i];
            nice.insert({a[i],i});
        }

        long long int final[n];
        i=0;

        for(auto &it : nice)
        {
            final[it.second]=i++;
        }

        for(i=1;i<n;++i)
        {
            if((final[i-1]+1)!=final[i])
                j++;
        }


        if(j+1>k)
            cout<<"NO\n";
        else
            cout<<"YES\n";
        
        
        


        
        
    }
}