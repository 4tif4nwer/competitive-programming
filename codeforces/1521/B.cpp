#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long int i , j , t,n,m;

    cin>>t;

    while(t--)
    {
        cin>>n;

        long long int a[n];

        m = 1000000001 ;

        long long int p;

        for(i=0;i<n;++i)
        {
            cin>>a[i];

            if(m>a[i])
            {
                m = a[i];
                p = i;
            }
        }

        

        if( p!= 0)
        {
            cout<<n<<"\n"<<1<<" "<<p+1<<" "<<m<<" "<<a[0]<<"\n";

        }
        else
            cout<<n-1<<"\n";
        for(i=1;i<n;++i)
        {
            cout<<1<<" "<<i+1<<" "<<m<<" "<<m+i<<"\n";
        }



        


    }

    return 0;


}
