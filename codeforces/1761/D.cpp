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
vector<ll> threes(int(1e6)+1,1);
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
long long powerthree(long long a, long long b) {
    if (b == 0)
        return 1;
    if(b<(1e6+1))
        return threes[b];
    long long res = powerthree(a, b / 2);
    if (b % 2)
        return (((res * res)%mod)*a)%mod;
    else
        return (res*res)%mod;
}
/*
ll powerthree(ll x, ll y, ll p = mod)
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
 		
 		if(y<(int(1e6)+1) && y>0)
 		{
 			
 			x = threes[y];y = 1;
 		}
        // Change x to x^2
        x = (x * x)%mod;
    }
    return res % p;
}*/
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

int main()
{
    Fast_io;
    
    
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
	freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
	#endif

    string s;

    ll t=1,k,z,i,j,n,m,a,q,c,h,b,ans,l,r,u,d,x,y;
    //cin>>t;
        //cout.precision(30);
    bool f;
   	for(i=1;i<(1e6+1);++i){
    	facts[i]= (facts[i-1]*i)%mod;
    	threes[i] = (threes[i-1]*3)%mod;
    	//cout<<facts[i]<<endl;
    }

    while(t--)
    {   
    	cin>>n>>k;
    	if(k==0){
    		cout<<power(3,n)<<"\n";
    		continue;
    	}
    	ans = 0;
    	z = n-k;
        vector<ll> ncrnk(k+1),ncrk(k);
        for(i=0;i<=k;++i){
            if(n-k-i<i)
                break;
            ncrnk[i] = ncr(n-k,i);
        }
        for(i=0;i<k;++i){
            if(k-1-i<i)
                break;
            ncrk[i] = ncr(k-1,i);
        }
    	//ll pz1 = powerthree(3,z+1);
    	ll pz = powerthree(3,z);
    	ll pk = powerthree(3,k);
    	for(i = 1;i<=k;++i){
    		j = i+1;
    		l = z-(j-2);
    		u = (z>=(j-2))?ncrnk[min(j-2,z-j+2)]*3:0;
    		u%=mod;
    		//cout<<u<<"\n";
    		d = (z>=(j-1))?ncrnk[min(j-1,z-j+1)]:0;
    		d%=mod;
    		//cout<<d<<"\n";
    		l = (u+d)%mod;
    		l = (l*(powerthree(3,2*i*(mod-2))));
    		l%=mod;

    		r = ((ncrk[min(i-1,k-i)]%mod))%mod;

    		ans+= (l*r)%mod;
    		ans%=mod;

    	}
        ans*=pz;
        ans%=mod;
    	ans*=pk;
        ans%=mod;
        cout<<ans<<"\n";
    	



    }
    
}
