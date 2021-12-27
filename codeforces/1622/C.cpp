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
        cin>>n>>k;
        ll a[n],sum = 0ll;

        for(i=0;i<n;++i){

            cin>>a[i];
            sum+=a[i];
        }
        if(n==1)
        {
            if(a[0]>k)
                cout<<a[0]-k<<"\n";
            else
                cout<<0<<"\n";
            continue;
        }
        sort(a,a+n);

        ll sll = a[0];
        
        ll sumback = 0,back_count=1;
        if(sum<=k){
            cout<<0<<"\n";
            continue;
        }
        sum = sum-k;
        ll steps = sum;
        ll curr_steps;


        for(i=n-1;i>0;i--)
        {       curr_steps = back_count;

                sumback+=a[i];
                ll ok = ((sum-sumback+sll*back_count)/(back_count+1));
                
                if((sum-sumback+sll*back_count)%(back_count+1))
                        ok++;
                if((sum-sumback+sll*back_count)>0)
                    curr_steps+=ok;
                if(steps>curr_steps)
                    steps = curr_steps;
                back_count++;
                //cout<<curr_steps<<" "<<ok<<"\n";




        }

        cout<<steps<<"\n";
        
        
    }
}