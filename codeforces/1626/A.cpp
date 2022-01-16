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
        cin>>s;
        int l[26]={0};
        for(i=0;i<s.size();++i){
            l[s[i]-'a']++;
            if(l[s[i]-'a']==2)
                cout<<s[i]<<s[i];
        }
        for(i=0;i<26;++i)
            if(l[i]==1)
                cout<<(char)('a'+i);
        cout<<"\n";

    }
}
