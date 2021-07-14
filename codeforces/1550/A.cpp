#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long int t = 1,k,z,c,i,j,n,m,a;

    cin>>t;

    
    while(t--)
    {
        cin>>n;

        if(n==1)
        {
            cout<<1<<"\n";
            continue;
        }
        else if(n==2)
        {
            cout<<2<<"\n";
            continue;
        }

        k = 2;
        c = 3;
        a = 2;


        while(c<n)
        {
            k+=2;

            if(c+k>n)
                break;

            c+=k;
            ++a;         

        }
        if(c+a-1 < n)
            ++a;

        cout<<a<<"\n";

        
    }

}