#include <bits/stdc++.h>

using namespace std; 


int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long int u=1,k,z,i,j,n;

    //string s;
    
    cin>>u;

    while(u--)
    {
        string s;
        cin>>n;
        i = n;
        while(i--)
        {
            s+= "()";
        }

        for(i=1;i<n;++i)
        {
            cout<<s<<"\n";
            s[i*2] = ')';
            s[i*2-1] = '(';

        }
        cout<<s<<"\n";

        
    }
}