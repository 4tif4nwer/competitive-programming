#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    

    long long int i,j,k,n,t,b,d,max,maxc;

    

    t=1;

    

    while(t--)
    {
        cin>>n;

        vector<pair<int,int>> a;

        

        
        for(i=0;i<n;++i)
        {
            cin>>b>>d;
            a.push_back({b,1});
            a.push_back({d,-1});

            
        }

        sort(a.begin(),a.end());

        i = 0;

        max = 1;

        maxc = 0;

        vector<pair<int,int>> :: iterator itr = a.begin();

        while(itr!=a.end())
        {

            if((*itr).second==1)
            {
                ++i;
                if(i>maxc)
                {
                    maxc = i;
                    max = (*itr).first;
                }


            }
            else
            {
                --i;
            }

            itr++;
        }

        cout<<max<<" "<<maxc<<"\n";
        
    }

    return 0;


}
