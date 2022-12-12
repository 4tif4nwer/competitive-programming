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
vector<ll> visited;
set<ll>vnice;
map<pair<ll,ll>,ll> edges;
vector<vector<ll>> adj;
void dfs(ll x,ll u){
    visited[u] = 1;
    for(auto &it : adj[u]){
        if(!visited[it]){
            vnice.insert(x^edges[{u,it}]);
            dfs(x^edges[{u,it}],it);
        }
    }
    return;
}
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
    cin>>t;
        //cout.precision(30);
    bool f;
   	
    vector<ll> primes;
    primes.push_back(2);
    z = 1;
    for(i=3;i<=sqrt(1e9);++i){
        f = 0;
        for(j = 0;primes[j]<=sqrt(i);++j){
            if(i%primes[j] == 0){
                f = 1;
                break;
            }

        }

        if(!f){
            primes.push_back(i);

        }
    }

    while(t--)
    {   
    	//yesorno(f);
        cin>>n;
        vector<ll> a(n);
        for(auto &it : a)cin>>it;
        map<ll,ll> countp;
        f = 0;
        
        for(i=0;i<n && !f;++i){
            
            for(j=0;j<primes.size();++j){
                if(primes[j]>sqrt(a[i]))
                    break;
                if(a[i]%primes[j] == 0){
                    
                    if(countp[primes[j]]){
                        f = 1;
                        break;
                    }

                    countp[primes[j]] = 1;
                    while(a[i]%primes[j] == 0){
                        a[i]/=primes[j];
                    }
                }

            }

            if(a[i]>1){
                if(countp[a[i]]){
                    f = 1;
                    break;
                }
                countp[a[i]] = 1;
            }
        }

        yesorno(f);
    }
    //cout<<primes.size();
}
