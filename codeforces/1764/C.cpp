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
   
    
    while(t--)
    {   
        cin>>n;
       	vector<ll> a(n);
       	map<ll,ll> nice;
       	for(i=0;i<n;++i){
       		cin>>a[i];
       		nice[a[i]]++;

       	}
       	z = nice.size();
       	if(z==1){
       		cout<<nice[a[0]]/2<<"\n";
       		continue;
       	}
       	a.clear();
       	for(auto &it : nice){
       		a.push_back(it.second);
       	}
       	z =ans = 0;
       	for(i=0;i<a.size();++i){
       		z+=a[i];
       		ans = max(ans,z*(n-z));
       	}
       	cout<<ans<<"\n";
    }
    
}
