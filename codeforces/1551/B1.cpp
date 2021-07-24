#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long int t=1,k,z,c,i,j,n;

    string s,fi,se;

    

    cin>>t;

    while(t--)
    {
        int let[26]={0};
        cin>>s;

        for(auto &it : s)
        {
            let[int(it-'a')]++;
        }

        int r,g,w;
        r=g=w=0;

        for(i=0;i<26;++i)
        {
            if(let[i]>1)
            {
                r++;g++;
            }
            else if(let[i]==1)
            {
                w++;
            }

        }
        cout<<r+(w/2)<<"\n";
        
    }
}