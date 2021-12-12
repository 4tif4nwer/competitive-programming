#include <bits/stdc++.h>
#include<math.h>


using namespace std; 


int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long int t=1,k,z,i,j,n,att,h,ans;
    
    cin>>t;


    while(t--)
    {
        cin>>n>>k;
        long long a[n];
        for(i=0;i<n;++i)
            cin>>a[i];
        sort(a,a+n);
        long long m = a[0],M = a[n-1];
        for(i=0;i<n;++i)
        {
            if(a[i]>0)
                break;
        }
        j = i-1;
        long long pos = n-i;
        if(j>0)
            while(a[j]==0)
            {
                j--;
                if(j==-1)
                    break;
            }
        long long neg = j+1;
        neg%=k;
        pos%=k;
        m = min(0ll,m);
        M = max(0ll,M);
        long long sub = max(M,abs(m));

        long long dis = -sub;//cout<<dis;
        h = 0;bool ok = 0;
        while(i<n){
            h++;
            if(!ok&&h==pos){
                dis+=2*a[i];
                ok = true;
                h = 0;
            }
            else if(h%k==0)
            {
                h = 0;
                dis+=2*a[i];
            }
            i++;

        }
        //cout<<j<<" ";
        h = 0;ok = 0;
        while(j>=0){
            h++;
            if(!ok&&h==neg){
                dis+=abs(2*a[j]);
                ok = true;
                h = 0;
            }
            else if(h%k==0)
            {
                h = 0;
                dis+=abs(2*a[j]);
            }
            j--;

        }
        cout<<dis<<"\n";
        
    }
}