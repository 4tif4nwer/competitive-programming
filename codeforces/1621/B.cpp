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
    
    cin>>t;


    while(t--)
    {
        cin>>n;
        ll lrc[n][3];
        for(i=0;i<n;++i)
            cin>>lrc[i][0]>>lrc[i][1]>>lrc[i][2];
        cout<<lrc[0][2]<<"\n";
        if(n==1){
            continue;
        }

        ll ex = 0;
        set<pair<pair<ll,ll>,ll>> l,r;
        l.insert(make_pair(make_pair(lrc[0][0],lrc[0][2]),-lrc[0][1]));
        r.insert(make_pair(make_pair(-lrc[0][1],lrc[0][2]),lrc[0][0]));
        
        for(i=1;i<n;++i)
        {
            
            l.insert(make_pair(make_pair(lrc[i][0],lrc[i][2]),-lrc[i][1]));
            r.insert(make_pair(make_pair(-lrc[i][1],lrc[i][2]),lrc[i][0]));
            ll minval = (*(l.begin())).first.first;
            ll maxval = (*(r.begin())).first.first;
            maxval = -maxval;
            a = (*(l.begin())).first.second;
            b = (*(r.begin())).first.second;
            ans = a+b;
            
            if(minval>=lrc[ex][0] && maxval<=lrc[ex][1])
                ans = min(ans,lrc[ex][2]);
            if(minval>=lrc[i][0] && maxval<=lrc[i][1]){
                if(ans>=lrc[i][2]){
                    ex = i;
                }
                ans = min(ans,lrc[i][2]);

            }
            
            
            
            
            

            
            cout<<ans<<"\n";
        }
        

        
        
        
    }
}