#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long int t=1,k,z,c,i,j,n;

    

    

    cin>>t;

    while(t--)
    {
        map<int,vector<int>> m;
        cin>>n>>k;
        int a[n];

        for(i=0;i<n;++i)
        {

            cin>>a[i];
            m[a[i]].push_back(i);
        }
        c=0;
        z=0;

        vector<int> nice,ans(n);

        for(auto &it : m)
        {
            if((it.second).size()>=k)
            {
                int col =1;
                for(auto &itr : it.second)
                {
                    ans[itr] = col++;
                    if(col==k+1)
                        break;
                }
            }
            else
            {
                nice.push_back(it.first);
                z+=(it.second).size();
            }

        }
        z/=k;

        
        
        int col =1;

        for(auto &it : nice)
        {
            for( auto &itr : m[it])
            {
                if(col==k+1)
                {
                    z--;
                    col =1;
                }
                if(z==0)
                    break;
                ans[itr] = col++;
            }


            if(z==0)
                break;
        }

        for(auto &it : ans)
            cout<<it<<" ";

        cout<<"\n";


        

        
    }
}