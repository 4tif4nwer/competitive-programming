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

    ll t=1,k,z,i,j,n,m,a,q,c,h,b,l,r,u,d,y;
    ll x,ans;
    cin>>t;
        //cout.precision(30);
    bool f;
   	

    while(t--)
    {   
    	cin>>n;
        vector<ll> a(n);
        ans = 0;
        for(i=0;i<n;++i){
            cin>>a[i];
            
        }
        z = 1;
        ll sum = 0;
        for(i=0;i<n;++i){
            sum += (a[i]);
            
        }
        if(sum%2){
            cout<<"-1\n";
            continue;
        }
        z = sum;
        l = 0;
        vector<pair<ll,ll>> nice;
        for(i=1;i<n;++i){
            if(z==0){
                nice.push_back({l+1,i});
                //cout<<l+1<<" "<<i<<"\n";
                l=i;
            }
            else if(z>0){
                if(a[i]!=1){
                    nice.push_back({l+1,i});
                    //cout<<l+1<<" "<<i<<"\n";
                    l = i;
                }
                else{
                    z-=2;
                    i++;
                }
            }
            else{
                if(a[i]!=-1){
                    nice.push_back({l+1,i});

                    //cout<<l+1<<" "<<i<<"\n";
                    l = i;
                }
                else{

                    z+=2;
                    i++;
                }
            }
        }
        nice.push_back({l+1,n});
        //cout<<l+1<<" "<<n<<"\n";
        cout<<nice.size()<<"\n";
        for(auto &it : nice){
            cout<<it.first<<" "<<it.second<<"\n";
        }


        



    }
    
}
