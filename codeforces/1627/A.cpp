#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l;
    
    cin>>t;


    while(t--)
    {
        char p;
        cin>>n>>m>>a>>b;
        a--;b--;
        bool bl = 0,best1=0,best2=0;
        for(i=0;i<n;++i){
            cin>>s;
            for(j=0;j<m;++j)
                if(s[j]=='B'){
                    if(j==b&&i==a)
                        best1=1;
                    else if(j==b||i==a)
                        best2 = 1;
                    bl=1;
                }
                
        }
        if(!bl)
            cout<<-1;
        else if(best1)
            cout<<0;
        else if(best2)
            cout<<1;
        else
            cout<<2;
        cout<<"\n";
    }
}
