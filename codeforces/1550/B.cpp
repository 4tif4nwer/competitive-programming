#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long int t = 1,k,z1,z0,c,i,j,n,m,a,b;
    string s;

    cin>>t;

    
    while(t--)
    {
        cin>>n>>a>>b;
        c = 0;

        a*=n;
        c+=a;
        cin>>s;
        if(b>=0)
        {
            b*=n;
            cout<<c+b<<"\n";
            continue;
        }
        else
        {
            z0=z1=0;
            bool f;

            if(s[0]=='0')
                f = 1;
            else
                f = 0;
            for(i=0;i<n;++i)
            {
                if(s[i]=='0'&&f ==1)
                {
                    z0++;
                    f = 0;
                }
                else if(s[i]=='1'&&f==0)
                {
                    z1++;
                    f = 1;
                }
            }
            k = min(z0,z1);
            b*=(k+1);
            cout<<c+b<<"\n";


        }

        
    }

}