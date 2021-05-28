#include<bits/stdc++.h>

using namespace std;



bool yezno(long long int n)
{
    int i = 0;

    while(n>0)
    {   
        n-=i;
        if(n%11==0 && n>=0)
            return 1;

        i=111;

    }

    return 0;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    

    long long int t,n;

    

    cin>>t;

    

    while(t--)
    {
        cin>>n;

        if(yezno(n))
            cout<<"YES\n";
        else
            cout<<"NO\n";
        
    }

    return 0;


}
