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
        ll a[n+1]={0},b[n+1]={0};
        
        for(i=0;i<n;++i){
            cin>>k;
            a[k]++;
        }
        
        ll s=-1;ll last = 0;
        j = -1;
        for(i=0;i<=n;++i){
            if(i==0){
                cout<<a[0]<<" ";
                s+=a[0];
                last = a[0];
                if(a[0]>1)
                    j = 0;
            }
            else if(i==1){
                if(a[0]==0)
                {
                    break;

                }
                else
                    cout<<a[1]<<" ";
                s+=a[1];
                last = a[1];
                if(a[1]>1)
                    j = 1;


            }
            else{
                if(s<(i-1))
                    break;
                s+=a[i];
                
                ans=last-a[i-1]+a[i];
                if(a[i-1]==0){
                    
                    while(a[j]<=1)
                    {
                        j--;
                    }
                    a[j]--;
                    a[i-1]++;
                    ans+=(i-j-1);


                }
                last = ans;
                cout<<ans<<" ";
                if(a[i]>1)
                    j = i;



            }
        }
        while(i<n+1){
            cout<<-1<<" ";
            i++;
        }
        cout<<"\n";

        
        
        
    }
}