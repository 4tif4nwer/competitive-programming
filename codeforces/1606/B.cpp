#include <bits/stdc++.h>

using namespace std; 


int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long int u=1,k,z,i,j,n,m;

    string s;
    
    cin>>u;


    while(u--)
    {
        cin>>n>>k;
        m = 1;
        long long int c = 0;

        while(m<n)
        {
            if(m>=k)
            {
                c+=(n-m)/k;
                if((n-m)%k>0)
                    c++;
                break;
            }
            else
            {
                m+=m;
            }
            c++;
        }
        cout<<c<<"\n";
        
    }
}