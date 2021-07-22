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
        k = n/10;

        if(n%10==9)
            ++k;

        cout<<k<<"\n";
        
    }
}