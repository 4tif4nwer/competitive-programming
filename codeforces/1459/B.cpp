#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    

    long long int t,n,ans,j,i,ans0,ki,kj;    

    t=1;

    

    while(t--)
    {
        cin>>n;

        ans = 0;

        ans0 = 0;

        ki = n/2;

        kj = n-ki;

        if(n%2==0)
        {
            if(ki%2==0)
            {
                
                cout<<4*(ki/2)*(kj/2) + (ki*2 + 1)<<"\n";
                continue; 
            }
            else
            {
                ans = (ki/2 + 1)*(kj/2 + 1);
            }


        }
        else
        {
            if(ki%2)
            {
                ki = kj;
                kj = n- ki;
            }
            ans0 = kj+1;
            ans = (ki)*(kj/2 + 1);
        }




        cout<<(ans*4 + ans0*2)<<"\n";

    }

    return 0;


}
