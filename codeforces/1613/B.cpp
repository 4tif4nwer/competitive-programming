#include <bits/stdc++.h>
#include<math.h>


using namespace std; 


int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long int t=1,k,z,i,j,n,m,ans;
    
    cin>>t;


    while(t--)
    {
        cin>>n;
        int a[n];

        for(i=0;i<n;++i)
            cin>>a[i];
        sort(a,a+n);
        for(i=0;i<n/2;++i)
            cout<<a[i+1]<<" "<<a[0]<<"\n";
    }
}