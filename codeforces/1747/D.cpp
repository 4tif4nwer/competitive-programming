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
    //cin>>t;
        //cout.precision(30);
    bool f;
   	

    while(t--)
    {   
    	cin>>n>>q;
        //cout<<q;
        vector<ll> a(n),left(n+1),leftsum(n+1);
        for(i=0;i<n;++i){
            cin>>a[i];
            //cout<<a[i]<<endl;
        }

        for(i=1;i<=n;++i){
            left[i] = left[i-1]^a[i-1];
            leftsum[i] = leftsum[i-1]+a[i-1];
        }
        set<pair<ll,ll>> odd,even;
        for(i=0;i<=n;++i){
            if(i%2)
                odd.insert({left[i],i});
            else
                even.insert({left[i],i});
        }
        pair<ll,ll> nice;
        while(q--){//cout<<q;
            cin>>l>>r;

            if((left[r]^left[l-1]) != 0){
                    cout<<"-1\n";
                    continue;
            }
            if(leftsum[r]-leftsum[l-1] == 0){
                cout<<"0\n";
                continue;
            }
            else if((r-l)%2){
                
                if(a[l-1]==0||a[r-1]==0){
                    cout<<1<<"\n";
                    continue;
                }
                
                if(l%2){
                    nice = *(odd.lower_bound({left[l-1],l}));
                    if(nice.first!=left[l-1] || nice.second>r){
                        cout<<"-1\n";
                    }
                    else{
                        cout<<"2\n";            
                    }

                }
                else{
                    nice = *(even.lower_bound({left[l-1],l}));
                    if(nice.first!=left[l-1] || nice.second>r){
                        cout<<"-1\n";
                    }
                    else{
                        cout<<"2\n";      
                    }
                }
            }
            else{
            
                if(l!=r){
                    cout<<1<<"\n";
                }
                else{
                    cout<<"0\n";
                }
            }
        }    

    }
    
}
