#include <bits/stdc++.h>

using namespace std;


int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t,n,i,j;

    cin>>t;   

    
    while(t--)
    {
        cin>>n;
        
        int a[n];
        
        for(i=0;i<n;++i)
        {
            cin>>a[i];
            
        }
        sort(a,a+n);

        for(i=0;i<n;++i)
            if(a[i]>0)
                break;
        if(i==n)
        {
            cout<<n<<"\n";
            continue;
        }
        int f = 1;
        for(j = 1;j<i;++j)
        {   
            if(a[j]-a[j-1]<a[i])
            {
                f=0;
                break;
            }
        }
        if(f)
            cout<<i+1;
        else
            cout<<i;

        cout<<"\n";




    }
    
    return 0;

    
}
