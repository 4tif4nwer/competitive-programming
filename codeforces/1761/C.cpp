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
    	vector<vector<bool>> a(n,vector<bool>(n,0));
    	vector<set<ll>> nice(n);
    	for(i=0;i<n;++i){
    			cin>>s;
    			for(j=0;j<n;++j)
    				a[i][j] = int(s[j]-'0');
    		nice[i].insert(i+1);
    	}	

    	for(j=0;j<n;++j){
    		for(i=0;i<n;++i){
    			if(a[i][j]){
    				for(auto &it : nice[i])
    					nice[j].insert(it);

    			}
    		}
    	}

    	for(i=0;i<n;++i){
    		cout<<nice[i].size();
    		for(auto &it : nice[i]){
    			cout<<" "<<it;

    		}
    		cout<<"\n";
    	}




    }
    
}
