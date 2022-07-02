#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);


int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l,r,u,d;
    //cin>>t;
        //cout.precision(30);
    bool f;

    while(t--)
    {
        cin>>n;
        ll a[n];
        for (i = 0; i < n; ++i)
        {
            cin>>a[i];
        }       
        sort(a,a+n);
        vector<pair<pair<ll,ll>,ll>> nice;
        j = 0;
        ll loc = n;
        for(i=n-1;i>=0;i--){
            //cout<<j<<endl;
            if(j==0){
                loc =i;
                j = a[i];
            }
            else if(j>=a[i]){
                nice.push_back({{i,loc},a[i]});
                j-=a[i];

            }
            else{

                nice.push_back({{i,loc},j});
                loc=i;
                j = a[i]-j;
            }
        }
        if(j%2==0){
            for(auto &it : nice){
                if(j<=0)
                    break;
                if(it.first.first!=loc && it.first.second!=loc)
                    j-=2*(it.second);
                
            }
            if(j<=0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else
            cout<<"NO\n";


    }
}
