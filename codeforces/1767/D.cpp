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
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return;
}
ll mod = 998244353;

ll power(ll x, ll y, ll p = mod)
{
 
    // Initialize answer
    ll res = 1;
 
    // Check till the number becomes zero
    while (y > 0) {
 
        // If y is odd, multiply x with result
        if (y % 2 == 1)
            res = (res * x)%mod;
 
        // y = y/2
        y = y >> 1;
 
        // Change x to x^2
        x = (x * x)%mod;
    }
    return res % p;
}

ll modinv(ll a, ll p = mod){
    return power(a,p-2);
}
vector<ll> facts(int(1e6)+1,1);

ll ncr(ll n, ll r){
    ll res = facts[n];
    res%=mod;
    res*=modinv((facts[r]*facts[n-r])%mod);
    res%=mod;
    return res;
}
map<pair<ll,ll>,ll> edges;
vector<vector<ll>> adj;
int main()
{
    Fast_io;
    
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
    freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
    #endif

    string s;

    ll t=1,k,z,i,j,n,m,a,q,c,h,b,l,r,u,d,y;
    ll x,ans;
    //cin>>t;
        //cout.precision(30);
    bool f;
    
    

    while(t--)
    {   
        //yesorno(f);
        cin>>n;
        cin>>s;
        l = 1;
        r = (1<<n);
        a = 0;
        b = 0;
        for(i=0;i<n;++i){
            if(s[i]=='1'){
                l+=(1<<a);
                a++;
            }
            else{
                r-=(1<<b);
                b++;
            }
        }
        while(l<=r){
            cout<<l<<" ";
            l++;
        }
        cout<<"\n";
        
        



    }
}
