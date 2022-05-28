#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);


int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l,r,x,y;
    //cout<<"hi";
    //vector<vector<int>> nice(1000001);
    n = 1000001;
    vector<ll> nice(n);
    for(i=2;i<=n;++i){
        j = i*2;
        //cout<<i<<endl;
        while(j<=n){
            nice[j] = 1;
            j+=i;
        }

    }
    ans = 0;
    vector<ll> primeslcount(n+1);
    for(i=2;i<=n;++i){
        if(nice[i]==0){
            ans++;
        }
        primeslcount[i] = ans;
    }

    
    
    cin>>t;
        //cout.precision(30);
    bool f;

    while(t--)
    {
        cin>>n;

        cout<<primeslcount[n]-primeslcount[int(sqrt(n))] + 1 <<"\n";
    }
}
