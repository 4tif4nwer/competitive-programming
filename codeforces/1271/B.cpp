#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    

    long long int i,j,k,n,t;

    string s,z;

    t=1;

    

    while(t--)
    {
        cin>>n;

        cin>>s;

        z=s;

        vector<int> ans;


        if(s[0]=='B')
        {
            s[0] = 'W';
                if(s[1]=='B')
                    s[1]='W';
                else
                    s[1]='B';
                ans.push_back(1);
        }


        for(i=2;i<n;++i)
        {
            if(s[i-1] =='B')
            {
                s[i-1] = 'W';
                if(s[i]=='B')
                    s[i]='W';
                else
                    s[i]='B';
                ans.push_back(i);
            }


        }
        if(s[n-1]=='B')
        {
            ans.clear();
            s = z;
            if(s[0]=='W')
            {
                s[0] = 'B';
                    if(s[1]=='B')
                        s[1]='W';
                    else
                        s[1]='B';
                    ans.push_back(1);
            }
            for(i=2;i<n;++i)
            {
                if(s[i-1] =='W')
                {
                    s[i-1] = 'B';
                    if(s[i]=='B')
                        s[i]='W';
                    else
                        s[i]='B';
                    ans.push_back(i);
                }


            }
            if(s[n-1]=='W')
            {
                cout<<-1<<"\n";
                continue;
            }


        }

        cout<<ans.size()<<"\n";
        for(auto &it : ans)
            cout<<it<<" ";

        cout<<"\n";
        
    }

    return 0;


}
