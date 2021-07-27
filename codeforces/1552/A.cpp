
#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long int t=1,k,z,c,i,j,n;

    string s;

    

    

    cin>>t;

    while(t--)
    {

        cin>>n>>s;

        vector<int> a(n);

        i = 0;
        for(auto &it : s)
        {
            a[i++] = int(it-'a');
        }

        sort(a.begin(),a.end());

        i = 0;
        j = 0;
        for(auto &it : s)
        {
            if(a[i++]!=int(it-'a'))
                j++;
        }

        cout<<j<<"\n";

    }
}