#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    long long int i , j , t;

    cin>>t;

    while(t--)
    {
        cin>>i>>j;

        if(j == 1)
        {
            cout<<"NO\n";
            continue;
        }	
        cout<<"YES\n"<<i*j<<" "<<i<<" "<<i*(j+1);

        cout<<"\n";


    }

    return 0;


}
