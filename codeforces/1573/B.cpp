#include <bits/stdc++.h>

using namespace std; 


int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long int u=1,k,z,i,j,n,m;

    //string s;
    
    cin>>u;


    while(u--)
    {
        cin>>n;

        long long a[n],b[n];

        for(i=0;i<n;++i)
            cin>>a[i];

        for(i=0;i<n;++i)
            cin>>b[i];

        k = n;
        long long ans = 2*n;

        pair<long long, long long> c[n];

        for(i=0;i<n;++i)
        {
            c[i] = {b[i],i};
        }
        sort(c,c+n);

        long long d[n];
        d[n-1]=c[n-1].second;
        for(i=n-2;i>=0;--i)
        {
            d[i] = min(d[i+1],c[i].second);
        }
        for(i=0;i<n;++i)
        {
            j = a[i];

            j = (j-1)/2;

            ans = min(ans,i+d[j]);

        }


        cout<<ans<<"\n";
        
    }
}