#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
void yesorno(bool f){
    if(f)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return;
}

int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,q,c,h,b,ans,l,r,u,d,x,y;
    cin>>t;
        //cout.precision(30);
    bool f;
   
    
    while(t--)
    {   
        
        cin>>n>>m;
        vector<vector<int>> nice(n,vector<int>(m));
        for(i=0;i<n;++i){
            cin>>s;
            for(j=0;j<m;++j){
                nice[i][j] = int(s[j]-'0');
            }
        }
        f = 0;
        bool iszero = 0;
        c = 0;
        for(i=0;i<n ;++i){
            for(j=0;j<m ;++j){
                if(!nice[i][j]){
                    iszero = 1;
                    if(i>0){
                        if(!nice[i-1][j])
                            f = 1;

                    }
                    if(j>0){
                        if(!nice[i][j-1])
                            f = 1;
                    }
                    if(i>0 && j>0){
                        if(!nice[i-1][j-1])
                            f = 1;
                    }
                    if(i+1<n && j>0){
                        if(!nice[i+1][j-1]){
                            f = 1;
                        }
                    }
                }
                else{
                    c++;
                }
            }
        }
        if(f){
            cout<<c<<"\n";
        }
        else if(iszero){
            cout<<max(0ll,c-1)<<"\n";
        }
        else{
            cout<<max(0ll,c-2)<<"\n";   
        }


    }
    
}
