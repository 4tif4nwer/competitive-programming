#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long int i , j , t,n;

    cin>>t;

    while(t--)
    {
        cin>>n;
        int i = -1;

        while(n>0)
        {
            n>>=1;
            ++i;

        }

        cout<<(1<<i)-1<<"\n";

        

    }

    return 0;


}
