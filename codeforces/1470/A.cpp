#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    

    long long int t,n,m,ans,j,f,i;    

    cin>>t;

    

    while(t--)
    {
        cin>>n>>m;

        long long int a[n],c[m+1];

        for(i =0;i<n;++i)
            cin>>a[i];
        
        for(i =1;i<=m;++i)
            cin>>c[i];

        sort(a,a+n);



        int j = 1;

        ans = 0;

        for(i=n-1;i>=0;--i)
        {
            if(j<=a[i])
            {
                ans += c[j++];
            }
            else
            {
                ans += c[a[i]];
            }
            
        }

        cout<<ans<<"\n";

    }

    return 0;


}
