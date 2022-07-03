#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
string s;
ll k,z,m,h,ans,l,r,u,d;
ll nice(ll i, ll j, ll op, ll c){
    ll a,b;
    //cout<<op<<" "<<c<<endl;
    if(i==j){
        if(int(s[i]-'a')==c)
            return op;
        else
            return op+1;
    }
    ll n = j-i+1;
    n/=2;
    z = n;
    k = op;
    l = i;

    while(z--){
        if(int(s[l]-'a')!=c)
            k++;
        l++;
    }
    a = nice(l,j,k,c+1);
    r = j;
    z = n;
    k = op;
    while(z--){
        if(int(s[r]-'a')!=c)
            k++;
        r--;
    }
    b = nice(i,r,k,c+1);
    return min(a,b);


}

int main()
{
    Fast_io;

    

    ll t,n;
    cin>>t;
        //cout.precision(30);
    bool f;

    while(t--)
    {
        cin>>n;
        cin>>s;
        cout<<nice(0,n-1,0,0)<<"\n";




    }
}
