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
        j = 0;
        int a[n];
        int m =101;
        for(i=0;i<n;++i)
        {
            cin>>a[i];
            m = min(a[i],m);
        }
        for(i=0;i<n;++i)
        {
            if(a[i]==m)
                ++j;
        }

        cout<<n-j;

        


        cout<<"\n";




    }
    
    return 0;

    
}
