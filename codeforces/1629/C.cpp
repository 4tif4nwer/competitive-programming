#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

bool isprime(ll n){
    ll m = sqrt(n);
    for(ll i=2;i<=m;++i){
        if(n%i==0)
            return false;

    }
    return true;
}
int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,x,h,y,ans,l;
    
    cin>>t;
    //cout.precision(30);
    
    

    while(t--)
    {   
        cin>>n;
        vector<ll> a[n+1];
        ll ok[n];
        for(i=0;i<n;++i){
            cin>>ok[i];
        }
        for(i=n-1;i>=0;--i){
            x = ok[i];
            a[x].push_back(i);
        }
        vector<ll> b;
        k = -1;
        while(n>(k+1)){
            j = 0;
            h = k;
            
            while(a[j].size()>0){
                z = a[j].size();
                if(h<a[j][z-1]){
                    k = max(k,a[j][z-1]);
                    a[j].pop_back();
                    
                    j++;
                    
                }
                else{    
                    
                    a[j].pop_back();
                }
                
                
            }
            b.push_back(j);
            if(j==0)
                k++;



        }
        cout<<b.size()<<"\n";
        for(auto &it : b)
            cout<<it<<" ";
        cout<<"\n";



    }
}