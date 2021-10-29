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
        cin>>s;
        bool f = 0;
        int c=0;
        if(s[0]=='a')
            f=0;
        else f = 1;

        for(i=0;i<s.size();++i)
        {
            if(s[i]=='a'&&f==1)
            {
                c++;
                f = 0;
            }
            else if(s[i]=='b'&&f==0)
            {
                c++;
                f = 1;
            }

        }
        if(c%2==0){
            cout<<s<<"\n";
            continue;
        }
        else if(s[0]=='a')
            s[0] = 'b';
        else
            s[0]='a';
        cout<<s<<"\n";


        
        
    }
}