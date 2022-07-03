#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

ll okvnice(ll a,ll b){
    ll z = 1;
    while(b--){
        z*=a;
    }
    return z;
}
int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l,r,u,d;
    cin>>t;
        //cout.precision(30);
    bool f;
    ll mod = 1000000007;

    while(t--)
    {
        cin>>n>>k;
        ans = n;
        if(n%k){
            cout<<n<<"\n";
            continue;
        }

        vector<ll> nice;
        vector<ll> exp;

        z= 2;
        m = 0;
        while(z<=sqrt(k))
        {
            while(k%z==0){
                m++; 
                //cout<<c<<" ";
                k/=z;
                if(k%z){
                    nice.push_back(z);
                    exp.push_back(m);
                    m=0;
                }
            }
            z++;
        }
        if(k>=2){
            nice.push_back(k);
            exp.push_back(1);
        }
        vector<ll> expn;
        m = 0;
        for(auto &it : nice){
            while(n%it==0){
                m++;
                n/=it;

            }
            expn.push_back(m);
            m=0;
        }
        vector<ll> values;
        for(i=0;i<nice.size();++i){
            //cout<<nice[i]<<" "<<expn[i]<<" "<<exp[i]<<endl;
            values.push_back(okvnice(nice[i],expn[i]-exp[i]+1));
        }
        sort(values.begin(),values.end());
        cout<<ans/values[0]<<"\n";



        

    }
}
