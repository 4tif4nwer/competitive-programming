#include<bits/stdc++.h>

using namespace std;

bool sortbysecdesc(const pair<long long int,int> &a,
                   const pair<long long int,int> &b)
{
       return a.first>b.first;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    

    long long int i,n,k,t,w,kh;    

    cin>>t;

    

    while(t--)
    {
        cin>>n>>k;

        kh = k/2;

        kh += (k%2);

        w=0;

        vector<pair<long long int, int>> a(n);

        vector<int> b;




        for(i=0 ; i<n;++i)
        {
            cin>>a[i].first;
            a[i].second = i;
        }

        sort(a.begin(), a.end(), sortbysecdesc);

        bool f=0;

        vector<pair<long long int,int>> :: iterator itr = a.begin();

        while(itr!=a.end())
        {
            if(k-(*itr).first>=w)
            {
                w+=(*itr).first;
                b.push_back((*itr).second+ 1);
            }
            if(w>=kh)
            {
                
                f =1;
                break;

            }
            itr++;
        }
        if(f)
        {
            cout<<b.size()<<"\n";
            for(auto &it : b )
                cout<<it<<" ";
            cout<<"\n";

        } 
        else
            cout<<-1<<"\n";


        

    }

    return 0;


}
