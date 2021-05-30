#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    

    long long int t,n,q,f,i,j;

    

    cin>>t;

    

    while(t--)
    {
        cin>>n>>q;

        int a[n];

        vector<int> b;

        f = 1;

        for(i=0;i<n;++i)
            cin>>a[i];

        for(i=0;i<n-1;++i)
        {
            if(f==1 && a[i]>a[i+1])
            {
                f = -1;
                b.push_back(a[i]);
            }
            else if(f == -1 && a[i]<a[i+1])
            {
                f = 1;
                b.push_back(a[i]);
            }

        }

        
            b.push_back(a[i]);

        f = 1;
        
        i = n;

        j = 0;

        for(auto &it :b )
        {
            j+= f*it;
            f*=-1;
            if(j>i)
            {
                i = j;
            }
        }
        cout<<i<<"\n";
        
    }

    return 0;


}
