#include <bits/stdc++.h>
#include<math.h>


using namespace std; 


int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long int t=1,k,z,i,j,n,m,att,h,ans;
    
    cin>>t;


    while(t--)
    {
        cin>>n>>h;
        int a[n];

        for(i=0;i<n;++i)
            cin>>a[i];
        //sort(a,a+n);
        long long l = 1,r = h;
        ans = r;
        while(l<r){
            k = (l+r)/2;
            att = 0;
            for(i=0;i<n;++i)
            {

                if(i!=n-1)
                    z = ((a[i+1]-a[i])>k)?k:(a[i+1]-a[i]);
                else
                    z = k;
                att+=z;
            }
            if(att>=h){
                r = k;
                ans = r;
            }
            else
                l = k+1;

        }
        cout<<ans<<"\n";
    }
}