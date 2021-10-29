#include <bits/stdc++.h>
#include<math.h>


using namespace std; 


int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long int t=1,k,z,i,j,n,m,ans;

    long long int nice[10] = {1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};


    //string s;
    
    cin>>t;


    while(t--)
    {
        cin>>n>>k;
        ans = 0;

        int a[n],b[n];

        for(i = 0;i<n;++i)
        {
            cin>>a[i];
            b[i] = nice[a[i]];

        }
        if(n==1)
        {
            cout<<k+1<<"\n";
            continue;
        }
        m = k;
        if(b[0]*m>=b[1]-1)
        {
            ans+=(b[1]-b[0]);
            k-=((b[1]-b[0])-1);

        }
        else
        {
            cout<<k+1<<"\n";
            continue;
        }
        
        
        
        for(i = 1;i<n-1;++i)
        {
            m = b[i]*k;
            if(m>=b[i+1])
            {
                ans+=(b[i+1]-b[i]);
            }
            else
            {
                ans+=m;
                k = 0;
                break;
            }
            k-=((b[i+1]-b[i])/b[i]);
            


        }
        ans+=b[n-1]*k;
        cout<<ans<<"\n";


        
        
    }
}