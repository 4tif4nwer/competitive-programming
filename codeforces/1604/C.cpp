#include <bits/stdc++.h>
#include<math.h>


using namespace std; 


int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long int t=1,k,z,i,j,n,m,ans;

    


    //string s;
    
    cin>>t;


    while(t--)
    {
        cin>>n;
        long long a[n];
        for(i=0;i<n;++i)
            cin>>a[i];
        bool ans=1;
        for(i=0;i<n;++i)
        {
            k = i+2;
            bool check=0;
            while(k>1)
            {
                if(a[i]%k){
                    check = 1;
                    break;
                }
                k--;

            }
            if(!check)
                ans=0;
        }
        if(ans)
            cout<<"YES\n";
        else
            cout<<"NO\n";        
        
    }
}