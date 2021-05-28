#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    

    long long int i,j,m,n,k,f,t;

    

    t =1;

    

    while(t--)
    {
        cin>>n>>m;

        vector<pair<int,int>> a;
        for(i=0;i<n;++i)
        {
            cin>>k;
            a.push_back({k,i});
        }
        sort(a.begin(),a.end());

        int b[m];

        i = k=0;

        j = m;

        vector<pair<int,int>> :: reverse_iterator it = a.rbegin();

        while(m>0)
        {
            k+=(*it).first;
            b[i++] = (*it).second;

            m--;
            it++;
        }
        m =j;
        sort(b,b+m);

        j =1;

        for(i=1;i<m;++i)
        {
                j*=(b[i]-b[i-1]);

                j%=998244353;
        }


        cout<<k<<" "<<j<<"\n";
        
    }

    return 0;


}
