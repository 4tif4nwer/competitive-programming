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
        cin>>n;

        j = 0;

        while(n>0)
        {
            j = max(j,n%10);
            n/=10;
        }

        cout<<j<<"\n";




        
    }
}