#include <bits/stdc++.h>
#include<math.h>

#define ll long long

#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

using namespace std; 


int main() 
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,a,h,b;
    
    cin>>t;
    unsigned ll n1,n2;


    while(t--)
    {
        cin>>n1>>n2;
        vector<ll> ok;
        bool pos = 1;
        while(n2!=0){
            if(n2%10<n1%10)
            {
                if(n2%100-n1%10>9)
                {
                    pos = 0;
                    break;
                }
                else
                {
                    ok.push_back(n2%100-n1%10);
                    n2/=100;
                    n1/=10;
                }
            }
            else
            {
                ok.push_back(n2%10-n1%10);
                    n2/=10;
                    n1/=10;
            }
        }
        if(pos&&n1==0){
            j = 0;
           vector<ll> :: reverse_iterator itr = ok.rbegin();
            for(;itr!=ok.rend();itr++){
                j*=10;
                j+=*itr;
                //j*=10;

            } 
            cout<<j;
        }
        else
            cout<<-1;
        cout<<"\n";
        
        
        
    }
}