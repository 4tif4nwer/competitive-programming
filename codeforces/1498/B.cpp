#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long int i , j , t,n,k,f,z;
    
    

    

    cin>>t;

    while(t--)
    {
        vector<int> s(21);
        
        cin>>n>>k;

        for(i = 0;i<n;++i)
        {
            cin>>j;
            s[20 - log2(j)]++;
        }

        j = 0;

        
        f = 0;

        vector<int> :: iterator itr;

        while(f!=n)
        {   
            ++j;

            z = k;

            itr = s.begin();

            while(itr!=s.end())
            {
                if(*itr>0 && z>=(1<<(20-(itr-s.begin()))))
                {
                    (*itr)--;
                    ++f;
                    z-=(1<<(20-(itr-s.begin())));

                }
                else
                    ++itr;
            }


        }
        
        
        cout<<j<<"\n";
        

    }

    return 0;


}
