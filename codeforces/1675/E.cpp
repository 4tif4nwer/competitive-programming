#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l,r;
    
    cin>>t;


    while(t--)
    {
        cin>>n>>k;
        cin>>s;
        char nice[26];
        for(i=0;i<26;++i){
            nice[i] = 'a'+i;
        }
        ll maxj = 0;
        for(i=0;i<n;++i){
            j = int(s[i]-'a');

            if(nice[j]=='a')
                continue;
            if(k>=(j-maxj)){
                k-=(j-maxj);
                maxj = max(j,maxj);
                while(j--){
                    nice[j+1] = 'a';
                }
            }
            else{
                char temp = 'a' + (j-k);
                for(m = j;m>(j-k);m--){
                    nice[m] = min(nice[m],temp);
                }
                k = 0;
            }
        }
        for(i=0;i<n;++i){
            cout<<nice[int(s[i]-'a')];
        }
        cout<<"\n";

    }
}
