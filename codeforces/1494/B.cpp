#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
bool ok(ll i,ll n){
        if(i>=0 && (i+1)<n){
            return true;
        }
        else
            return false;
    }
int main()
{
    Fast_io;

    string s;

    ll t=1,n,u1,r1,d1,l1,i;
    
    cin>>t;
    
    
    

    while(t--)
    {
        cin>>n>>u1>>r1>>d1>>l1;
        ll u,r,d,l;

        for( i=0;i<16;++i){
            u = u1;r = r1;d = d1;l = l1;
            bitset<4> c(i);
            if(c[3])
            {
                u--;l--;
            }
            if(c[2]){
                u--;r--;
            }
            if(c[1]){
                r--;d--;
            }
            if(c[0]){
                d--;l--;
            }
            if(ok(u,n)&&ok(r,n)&&ok(d,n)&&ok(l,n)){
                break;
            }
        }
        if(i==16)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}
