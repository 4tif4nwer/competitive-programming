#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,z1,i,j,n,m,a,h,b,ans,l,r;
    
    //cin>>t;


    while(t--)
    {
        cin>>n;
        ans = 0;
        vector<ll> nicemin,nicemax;
        ll now = n;
        for(i=0;i<n;++i){
            cin>>k;
            z = 1e9;
            z1 = -1;
            bool f = 0;
            while(k--){
                cin>>a;
                if(a>z && !f){
                    ans+=(2*now-1);
                    now--;
                    f = 1;
                }
                z1 = max(z1,a);
                z = min(z,a);
            }
            if(f)
                continue;
            //cout<<ans<<endl;
            
            nicemax.push_back(z1);
            nicemin.push_back(z);
            
            


        }
        sort(nicemin.begin(),nicemin.end());
        //for(auto &it : nicemin)
        //    cout<<it<<"\n";

            //sort(nicemax.begin(),nicemax.end())

            for(j=0;j<nicemax.size();++j){
                //cout<<ans<<endl;
                a = nicemax[j];
                l = 0;
                r = (nicemin.size());
                while(l<r-1){
                    k = (l+r)/2;
                    if(nicemin[k]<a)
                        l = k;
                    else
                        r = k;
                }
                if(l+1<nicemin.size()){
                    if(nicemin[l+1]<a)
                        l++;
                }

                if(nicemin[l]>=a){
                    continue;
                }
                ans+=(l+1);


            }
        cout<<ans<<"\n";

    }
}