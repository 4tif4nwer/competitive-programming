
#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long int t=1,k,z,c,i,j,n;

    string s;

    

    

    cin>>t;

    while(t--)
    {

        cin>>n;

        int a[n][5];

        for(i=0;i<n;++i)
            for(j=0;j<5;++j)
                cin>>a[i][j];

        k =0;
        for(i=1;i<n;++i)
        {
            z=c=0;
            for(j=0;j<5;++j)
            {
                if(a[k][j]<a[i][j])
                    z++;
                else
                    c++;
            }
            if(c>z)
                k=i;

        }

        bool ans=1;

        for(i=0;i<n;++i)
        {
            if(i==k)
                continue;
            z=c=0;
            for(j=0;j<5;++j)
            {
                if(a[k][j]<a[i][j])
                    z++;
                else
                    c++;
            }
            if(c>z)
            {
                ans=0;
                break;
            }


        }
        if(ans)
        {
            cout<<k+1;
        }
        else
            cout<<-1;
        cout<<"\n";

    }
}