#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    

    long long int t,i,j,n,p,f,r,r1,temp,rt;

   // string a;

    

    cin>>t;



    

    while(t--)
    {
        cin>>n;

        i = 2;

        j = n;

        temp = n;



        p = 1;

        r = 1;

        rt  = sqrt(n);





        while(n!=1 && i<=rt)
        {
            r1 = 1;
            f = 0;
            while(n%i==0)
            {
                n/=i;
                ++f;
                r1*=i;
            }
            if(f>p)
            {
                p=f;
                j=i;
                r = r1;
            }
            i++;
        }

        f = temp/r;

        if(j!=temp)
            f*=j;

        cout<<p<<"\n";

        for(i=1;i<p;++i)
            cout<<j<<" ";

        cout<<f<<"\n";



    }

    return 0;


}