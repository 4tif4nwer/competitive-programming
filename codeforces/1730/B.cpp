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
    float x,ans;
    cin>>t;
        //cout.precision(30);
    bool f;
   	

    while(t--)
    {   
    	cin>>n;
        vector<pair<ll,ll>> a(n);
        for(i=0;i<n;++i){
            cin>>a[i].first;

        }
        for(i=0;i<n;++i){
            cin>>a[i].second;
        }
        if(n==1){
            cout<<a[0].first<<"\n";
            continue;
        }
        sort(a.begin(),a.end());

        vector<ll> left(n),right(n);
        left[0] = a[0].second;
        for(i=1;i<n;++i){
            left[i] = max(a[i].second,left[i-1]+a[i].first-a[i-1].first);
        }
        right[n-1] = a[n-1].second;
        for(i = n-2;i>=0;--i){
            right[i] = max(a[i].second,right[i+1]+a[i+1].first-a[i].first);
        }
        //for(auto &it : left)cout<<it<<" ";
         //   cout<<"\n";
        //for(auto &it : right)cout<<it<<" ";
          //  cout<<"\n";
        float time = 1e18;
        for(i=0;i<n-1;++i){
            x = right[i+1]-left[i] + a[i+1].first-a[i].first;
            x/=2.0;
            if(x<0)x = 0;
            else if(x>a[i+1].first-a[i].first) x = a[i+1].first-a[i].first;
            //cout<<x<<"\n";
            if(time>max(float(left[i])+x,float(right[i+1]+a[i+1].first-a[i].first)-x)){
            
                ans = float(a[i].first)+x;
                time = max(float(left[i])+x,float(right[i+1]+a[i+1].first-a[i].first)-x);
                //cout<<ans<<" "<<time<<"\n";
            }
        }
        cout<<fixed<<ans<<"\n";

    }
    
}
