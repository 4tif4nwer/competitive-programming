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

    ll t=1,k,z,i,j,n,m,a,q,c,h,b,ans,l,r,u,d,x,y;
    cin>>t;
        //cout.precision(30);
    bool f;
   	

    while(t--)
    {   
    	cin>>n>>a>>b;

        edges.clear();
        adj.clear();
        adj.resize(n);
        for(i=1;i<n;++i){
            cin>>l>>r>>k;
            edges[{l-1,r-1}] = k;
            edges[{r-1,l-1}] = k;
            adj[l-1].push_back(r-1);
            adj[r-1].push_back(l-1);
            
        }
        set<ll> seta,setb;
        seta.insert(0);
        visited.clear();
        vnice.clear();
        visited.resize(n,0);

        visited[b-1] = 1;
        dfs(0,a-1);
        for(auto &it : vnice){
            seta.insert(it);
        }
        visited.clear();
        visited.resize(n,0);
        vnice.clear();
        dfs(0,b-1);
        for(auto &it : vnice){
            setb.insert(it);
        }
        f  = 0;
        for(auto &it : setb){
            //cout<<it;
            if(seta.find(it)!=seta.end())
                f = 1;
        }
        yesorno(f);
    }
    
}
