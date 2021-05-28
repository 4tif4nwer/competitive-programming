#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    

    long long int i,j,m,n,k,f,f1,t;

    

    cin>>t;

    

    while(t--)
    {
        cin>>n>>m;

        long long int a[n][m];

        for(i=0;i<n;++i)
            for(j=0;j<m;++j)
                cin>>a[i][j];

        k = 0;

        for(i=0;i<n/2;++i)
        {
            for(j=0;j<m/2;++j)
            {   
                long long int z[4] = {a[i][j],a[n-i-1][j],a[i][m-j-1],a[n-i-1][m-j-1]};

                sort(z,z+4);

                k+= (z[1]-z[0]);
                k+=(z[2]-z[1]);
                k+=(z[3]-z[1]);

            }
        }

        if(n%2)
        {
            for(i=0;i<m/2;++i)
            {
                k+=abs(a[n/2][i] - a[n/2][m-i-1]);
            }
        }

        if(m%2)
        {
            for(i=0;i<n/2;++i)
            {
                k+=abs(a[i][m/2] - a[n-i-1][m/2]);
            }
        }


        

        cout<<k<<"\n";
        
    }

    return 0;


}
