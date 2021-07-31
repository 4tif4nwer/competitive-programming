
#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long int t=1,k,z,c,i,j,n,m;

    string s;

    

    

    cin>>t;

    while(t--)
    {
        cin>>n;

        if(n<6)
            cout<<15<<"\n";
        else
        {
            if(n%2)
                n++;
            n/=2;
            n*=5;
            cout<<n<<"\n";
        }

        
    }
}