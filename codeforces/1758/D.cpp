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
   
    vector<ll> squares(int(2e7));
    for(i=0;i<squares.size();++i){
    	squares[i] = i*i;
    }
    while(t--)
    {   
    	cin>>n;
    	l = n*(n+1);
    	l/=2;
    	l = sqrt(l);
    	r = int(squares.size())-1;
    	while(l<=r){
    		z = (l+r)/2;

    		u = n*(n-1);
    		u/=2;
    		u+=(z+1);

    		d = (n-3)*(n-2);
    		d/=2;
    		d = z+2+(n-2)*z - d;
    		j = squares[z]-u;
    		j/=n;
    		c = squares[z]-d;
    		if(c%n){
    			c/=n;
    			c+=1;
    		}
    		else
    			c/=n;

    		if(c+z+1>1e9)
    		{
    			r = z-1;
    		}
    		else if(c>j)
    			l = z+1;
    		else
    			break;

    	}
    	// c ..... c+z+1
    	//c = j;
    	vector<ll> a(n);
    	a[0] = c+1;
    	a[n-1] = c+z+1;
    	ans = a[0]+a[n-1];
    	for(i=1;i<n-1;++i){
    		a[i] = c+i+1;
    		ans+=a[i];
    	}
    	i = n-2;
    	k = c + z;
    	while(ans<squares[z]){
    		if(ans+(k-a[i])>squares[z]){
    			a[i]+=(squares[z]-ans);
    			ans = squares[z];

    		}
    		else{
    			ans-=a[i];
    			a[i] = k;
    			ans += a[i];
    			k--;
    			i--;


    		}
    	}
    	for(auto &it : a)cout<<it<<" ";
    	cout<<"\n";

    }
    
}
