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
        cin>>n>>x;
       	vector<ll> a(n);
       	
       	for(i=0;i<n;++i){
       		a[i] = i+1;
       	}
       	a[0] = x;

       	a[x-1] = n;
       	a[n-1] = 1;

       	i = x;
       	while(i<n-1){
       		if((a[i]%x == 0) && (a[x-1]%x !=0)){
       			swap(a[i],a[x-1]);
       			//a[x-1] = a[i];
       			x = i+1;
       			//i++;
       			//a[x-1] = n;
       		}
       		else if((a[i]%x == 0) && (a[x-1]%(i+1) ==0)){
       			swap(a[i],a[x-1]);
       			//a[x-1] = a[i];
       			x = i+1;
       			
       		}
       		
       			i++;
       	}
       	f = 1;
       	for(i=0;i<n-1;++i){
       		if(a[i]%(i+1))
       			f = 0;
       	}
       	if(f){
       		for(auto &it : a){
       			cout<<it<<" ";
       		}cout<<"\n";
       	}
       	else
       		cout<<"-1\n";
       	
    }
    
}
