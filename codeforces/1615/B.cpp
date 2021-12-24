#include <bits/stdc++.h>
#include<math.h>
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std; 
int main() 
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,a,h,b,ans;
    //cout<<"ok";
    vector<int> comp[20];
    int ok[20] = {0};
    for(i=0;i<=200000;++i){
        //cout<<"ok";
        j = i;
        //k = 0;
        for(k=0;k<20;++k){
            if(j%2==1){
                comp[k].push_back(ok[k]+1);
                ok[k]++;
            }
            else
                comp[k].push_back(ok[k]);
            j/=2;
            //k++;
        }   
    }


    
    cin>>t;

    


    while(t--)
    {
        
        cin>>a>>b;
        
        //bitset<>

        //ll bit = 0;
        //bool f = 1;
        ll ans = 0;
        for(j=0;j<20;++j){
            //ll zeroes = 0;
            k = comp[j][b]-comp[j][a-1];
            
            ans = max(ans,k);

        }
        cout<<b-a+1-ans<<"\n";

        
        
    }
}