

#include <bits/stdc++.h>

using namespace std; 


int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long int t=1,k,z,i,j,n;

    string s;
    
    cin>>t;

    while(t--)
    {
        cin>>n;
        long long int a[n],b[n];

        for(i=0;i<n;++i)
            cin>>a[i];

        for(i=1;i<n;++i)
            a[i]=a[i-1]+a[i];
        for(i=0;i<n;++i)
            cin>>b[i];

        for(i=n-2;i>=0;--i)
            b[i]= b[i+1]+b[i];
        z = b[0]+a[n-1];

        for(i=0;i<n;++i)
        {
            j = a[n-1]-a[i];
            k = b[0]-b[i];
            j = max(j,k);

            z = min(z,j);
        }

        cout<<z<<"\n";




        
    }
}