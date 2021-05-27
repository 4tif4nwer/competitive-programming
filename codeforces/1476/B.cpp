#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a[10] = {0,1,5,-1,-1,2,-1,-1,8,-1};

    long long int t,n,k,ans,j,f,i;    

    cin>>t;

    

    while(t--)
    {
        cin>>n>>k;

        long long int a[n];

        for(i =0;i<n;++i)
            cin>>a[i];
        long long int pr[n];

        pr[0]=0;

        for(i=1;i<n;++i)
        {
            pr[i] = pr[i-1] + a[i-1];

            
        }

        ans = 0 ;

        

        for(i = n - 1;i>0;--i)
        {
            j = k*pr[i] - 100*a[i];

            if(j<0)
            {
                f = 100*a[i];

                j = f/k;

                j += (f%k)?1:0;

                j -= pr[i];

                

                ans = max(j,ans);

            }

        }

        cout<<ans<<"\n";

    }

    return 0;


}
