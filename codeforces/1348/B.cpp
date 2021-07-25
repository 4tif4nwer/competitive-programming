//Phoenix and beauty

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
        cin>>n>>k;

        set<long long int> nice;


        for(i=0;i<n;++i)
        {
            cin>>c;

            nice.insert(c);
        }

        if(nice.size()>k)
        {
            cout<<-1<<"\n";
            continue;
        }

        cout<<n*k<<"\n";

        vector<long long int> a;

        for(auto &it : nice)
        {
            a.push_back(it);
        }

        while(a.size()<k)
        {
            a.push_back(1);
        }

        for(i=0;i<n;++i)
            for(auto &it : a)
                cout<<it<<" ";

        cout<<"\n";
        
    }
}