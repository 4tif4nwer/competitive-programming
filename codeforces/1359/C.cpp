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

    string s;

    ll q=1,t,k,z,i,j,n,m,a,c,h,b,ans,l,r,u,d;
    cin>>q;
        //cout.precision(30);
    bool f;
   
    while(q--)
    {   
        f = 1;
        cin>>h>>c>>t;
        float avg = float(h+c)/2.0;
        //cout<<avg;
        if(float(t)<=avg){
            cout<<2<<"\n";
            continue;
        }
        else if(t==h){
            cout<<1<<"\n";
            continue;
        }
        float diff = float(t)-avg;
        float odd = float(h-c)/(2.0*diff);
        z = odd;
        if(z%2==0)
            z--;
        //cout<<diff<<"\n";
        float temp,best = 1e9;

        for(i=0;i<10;++i){
            temp = abs(diff-float(h-c)/(2.0*z));
            if(temp<best){
                ans = z;
                best = temp;
            }
            z+=2;
        }
        cout<<ans<<"\n";


        
        
    }
    
}
