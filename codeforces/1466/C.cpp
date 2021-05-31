#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    

    long long int t,n,q,f,i,j;

    string a;

    

    cin>>t;

    

    while(t--)
    {
        cin>>a;

        j = a.size();

        vector<int> ch(j);

        n = 0;

        i =0;

        

        while(i<j-2)
        {
            if(ch[i])
            {
                ++i;
                continue;
            }
            
            if(a[i]==a[i+1])
            {
                ++n;
                ch[i+1] = 1;
                
            }
            if(a[i]==a[i+2])
            {
                ++n;
                
                ch[i+2] = 1;
            }

            ++i;
            

        }
        if(i==j-2 && ch[i]==0)
        {

            if(a[j-2]==a[j-1])
                ++n;
        }

        
        cout<<n<<"\n";
        
    }

    return 0;


}