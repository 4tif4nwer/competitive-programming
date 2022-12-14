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
        cout<<"Ya\n";
    else
        cout<<"tidak\n";
    return;
}
ll mod = 1e9 + 7;

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
int charnum(char a){
    return int(a-'a');
}
int main()
{
    Fast_io;
    
    
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif

    vector<string> s;

    ll t=1,k,z,i,j,n,m,a,q,c,h,sum,b,l,r,u,d,y;
    ll x,ans;
    cin>>t;
        //cout.precision(30);
    bool f;
   	
    

    while(t--)
    {   
    	cin>>n>>m>>k;
        vector<ll> a(k);
        for(i=0;i<k;++i)cin>>a[i];
        z = n*m-3;

        set<ll> nice;        

        for(i=0;i<k && i<z;++i){
            nice.insert(a[i]);
        }
        c = k;
        f = 1;
        while(c>0){
            if(nice.find(c)!=nice.end()){
                c--;
                if(i<k)
                    nice.insert(a[i++]);
                else
                    break;
            }
            else{
                f = 0;
                break;
            }
        }
        yesorno(f);

    }
}
