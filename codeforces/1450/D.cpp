#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long int t=1,k,z,c,i,j,n;

    

    

    cin>>t;

    while(t--)
    {
        cin>>n;

        long long int a[n],count[n+1] = {0}, uniq = 0, ans[n+1] = {0};

        for(i=0;i<n;++i)
        {
            cin>>a[i];

            if(count[a[i]]==0)
                uniq++;

            count[a[i]]++;
        }

        if(uniq == n)
            ans[1]=1;

        if(count[1])
            ans[n]=1;

        long long int l = 0, r = n-1;

        for(k = n - 1; k>1;--k)
        {
            j = n - k;

            if(count[j]==1 && (a[l]==j || a[r] == j) && count[j+1])
            {
                if(a[l]==j)
                    l++;
                else
                    r--;
                ans[k] = 1;

                continue;
            }

            break;
        }

        for(i=1;i<=n;++i)
            cout<<ans[i];

        cout<<"\n";

        

        
    }
}