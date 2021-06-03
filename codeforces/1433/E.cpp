#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    

    long long int te,k,n,i;

    unsigned long long int f;
    //string s,t;

    

    te=1;//cin>>t;



    

    while(te--)
    {
        cin>>n;

        f = 2;

        for(i=2;i<n;++i)
        {
            f*=i;
        }

        f/=n;



        
        cout<<f<<"\n";
   
    }

    return 0;


}