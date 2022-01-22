#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

bool isprime(ll n){
    ll m = sqrt(n);
    for(ll i=2;i<=m;++i){
        if(n%i==0)
            return false;

    }
    return true;
}
int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,x,h,y,ans,l;
    
    cin>>t;
    //cout.precision(30);
    
    

    while(t--)
    {   
        cin>>n;
        if(n==1)
        {
            cout<<"FastestFinger\n";
            continue;
        }
        if(n==2)
        {
            cout<<"Ashishgup\n";
            continue;
        }
        if(n%2)
            cout<<"Ashishgup"<<"\n";
        else{
            m = n;
            while(n%2==0){
                n/=2;
            }
            if(n==1)
            {
                cout<<"FastestFinger\n";
            }
            else if(n*2==m){
                if(isprime(n)){
                    cout<<"FastestFinger\n";
                }
                else
                    cout<<"Ashishgup\n";
            }
            else
                cout<<"Ashishgup\n";


        }

    }
}