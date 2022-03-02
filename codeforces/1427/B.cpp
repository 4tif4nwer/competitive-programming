#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l;
    
    cin>>t;


    while(t--)
    {
        cin>>n>>k;
        vector<ll> l,w;
        cin>>s;

        //for(i=0;i<n;++i)cin>>a[i];
        bool f = 0;
        z = 0;
        ans = 0;
        bool fw = 0;
        ll fl=0;
        if(s[0]=='W')
            ans = 1;
        for(i=1;i<n;++i){
            if(s[i]=='W'){
                ans++;
                if(s[i-1]=='W')
                    ans++;
            }
        }
        //cout<<ans<<endl;
        
        for(j = n-1;j>=0;j--)
            if(s[j]=='W')
            {
                j++;
                break;
            }
        
        for(i = 0;i<j;++i){
            if(!f && s[i]=='L'){
                z++;
            }
            else if(f && s[i]=='W'){
                z++;
            }
            else if(!f && s[i]=='W'){
                if(!fw){
                    fw = 1;
                    fl = z;
                    z = 1;
                    f = 1;
                    continue;
                }
                if(z!=0)
                    l.push_back(z);
                z = 1;
                f = 1;
            }
            else if(f && s[i]=='L'){
                if(z!=0)
                    w.push_back(z);
                z = 1;
                f = 0;
            }
        }
        //cout<<ans<<endl;
        sort(l.begin(),l.end());
        if(k>0)
            for(auto &it : l){
                if(!k)
                    break;

                if(k>=it){
                    k-=it;
                    ans+=(2*(it)+1);
                }
                else{
                    ans+=(2*(k));
                    k = 0;
                    break;
                }

            }
        //cout<<ans<<endl;
        if(k>0){
            if(k>=fl){
                ans+=(2*fl);
                k-=fl;
            }
            else{
                
                ans+=(2*k);
                k = 0;
            }
        }
        //cout<<ans<<endl;
        if(k>0){
            if(j==-1){
                ans--;
                //cout<<ans<<endl;
                j = 0;
            }
            for(;j<n&&k>0;++j){
                ans+=2;
                k--;    
            }
        }
        cout<<ans<<"\n";
        

    }
}
