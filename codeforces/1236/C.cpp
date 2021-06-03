#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    

    long long int te,k,n,i,j,f,f1;

    
    //string s,t;

    

    te=1;//cin>>t;



    

    while(te--)
    {
        cin>>n;

        int a[n][n];

        k = n*n;

        f = 1;

        f1 = 0;

        for(j=0;j<n;++j)
        {
            for(i=f1;i<n && i>=0;i+=f)
                a[i][j]=k--;

            f *= (-1);

            f1 = (n-1) - f1;


        }
        for(i=0;i<n;++i)
        {
            for(j=0;j<n;++j)
                cout<<a[i][j]<<" ";
            cout<<"\n";
        }
   
    }

    return 0;


}