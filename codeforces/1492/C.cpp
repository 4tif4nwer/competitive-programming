#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    

    long long int te,i,j,n,p,f,m;

    string s,t;

    

    te=1;//cin>>t;



    

    while(te--)
    {
        cin>>n>>m>>s>>t;

        long long int fo[m],lo[m];//first occurence, last occurence

        j=i=0;


        while(i<m)
        {   
            if(t[i]==s[j])
            {
                
                fo[i]=j;
                ++i;
            }
            ++j;
        }

        i=m-1;
        j=n-1;
        while(i>=0)
        {
            if(t[i]==s[j])
            {
                
                lo[i]=j;
                --i;
            }
            --j;
        }

        f = 0;

        for(i=1;i<m;++i)
        {
            if(f<(lo[i]-fo[i-1]))
                f = (lo[i]-fo[i-1]);
        }

        cout<<f<<"\n";
   
    }

    return 0;


}