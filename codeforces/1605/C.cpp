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
        cin>>n>>s;
        ll c[n]={0},b[n]={0};
        if(s[0]=='c')
            c[0]=1;
        else if(s[0]=='b')
            b[0]=1;
        ll fa = -1,fa2 = -2;

        ans = n+2;
        for(i=1;i<n;++i){
            if(s[i]=='c')
                c[i]=1;
            else if(s[i]=='b')
                b[i]=1;
            c[i]+=c[i-1];
            b[i]+=b[i-1];
        }

        for(i=0;i<n;++i){
            //cout<<fa2<<fa<<endl;
            if(s[i]=='a'){
                

                if(fa == -1){
                    fa = i;
                    fa2 = -1;
                }
                else{
                    
                    if((b[i]-b[fa])<2 && (c[i]-c[fa])<2)
                    {
                        ans=min(ans,i-fa+1);
                    }

                    if(fa2 == -1)
                    {
                        fa2 = fa;
                    }
                    else if(fa2>=0)
                    {
                        if((b[i]-b[fa2])<3 && (c[i]-c[fa2])<3)
                             ans=min(ans,i-fa2+1);

                    }

                    fa2 = fa;
                    fa = i;

                }
            }
            
        }

        if(ans>n)
            ans = -1;
        cout<<ans<<"\n";

    }
}
