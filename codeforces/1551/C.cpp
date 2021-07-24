#include <bits/stdc++.h>

using namespace std; 

bool spl(const pair<int,int> &a,const pair<int,int> &b)
{
    
    
    return((a.second-a.first) < (b.second-b.first));


}

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

        int count[n][6] = {0};



        for(i=0;i<n;++i)
        {
            cin>>s;
            for(auto &it : s)
            {
                count[i][int(it-'a')]++;

            }
            count[i][5] = s.size();
        }

        long long int maxans = 0;

        for(i=0;i<5;++i)
        {
            vector<pair<int,int>> nice;

            for(j=0;j<n;++j)
            {
                nice.push_back({count[j][i],count[j][5]-count[j][i]});
            }

            sort(nice.begin(), nice.end(), spl);

            z = 0;
            c = 0;

            for(auto & it : nice)
            {
                z+=(it.first-it.second);
                if(z<=0)
                    break;
                ++c;
            }

            maxans = max(maxans,c);
        }

        cout<<maxans<<"\n";




        
    }
}