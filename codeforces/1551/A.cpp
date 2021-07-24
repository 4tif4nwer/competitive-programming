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

        k = n/3;

        i = j = k;

        k = n - (k*3);

        if(k==1)
            ++i;
        else if(k==2)
            ++j;

        cout<<i<<" "<<j<<"\n";
        
    }
}