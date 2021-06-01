#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    

    long long int t,i,j,n;

   // string a;

    

    cin>>t;



    

    while(t--)
    {
        cin>>n;

        int a[n];

        bool b[n];

        vector<int> c;



        for(i=0;i<n;++i)
            cin>>a[i];

        for(i=0;i<n;++i)
        {
            cin>>b[i];
            if(!b[i])
                c.push_back(a[i]);
        }

        sort(c.begin(),c.end(),greater<int>());

        vector<int> :: iterator it = c.begin();

        
        for(i=0;i<n;++i)
        {
            if(!b[i])
            {
                a[i] = *it;
                it++;

            }

            cout<<a[i]<<" ";

            

        }
        cout<<"\n";







    }

    return 0;


}