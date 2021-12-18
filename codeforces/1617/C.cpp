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


    while(t--)
    {
        cin>>n;
        
        ll a[n];
        for(i=0;i<n;++i)
            cin>>a[i];

        sort(a,a+n);
        j = n;
        vector<long long> nice;
        ll perm[n] = {0};
        map<ll,ll> avlbl;
        for(i=0;i<n;++i){
            //avlbl[a[i]] = 1;
            
            if(a[i]<=n){
                if(perm[a[i]-1])
                    nice.push_back(a[i]);
                else
                    perm[a[i]-1] = 1;
            }
            else 
                nice.push_back(a[i]);


        }
        vector<ll> :: iterator itr = nice.begin();
        z = 0;
        for(i=0;i<n;++i){
            if(!perm[i]){
                if(itr!=nice.end())
                {
                    if(*itr>2*(i+1)){
                        z++;
                        perm[i] = 1;
                        itr++;
                    }
                    else
                        break;

                }

            }
        }
        for(i=0;i<n;++i)
        {
            if(!perm[i])
                break;

        }
        if(i==n)
            cout<<z<<"\n";
        else
            cout<<"-1\n";


        
        
    }
}