#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    

    long long int t,n,q,f,i,j,b,c,s,k;

    string a;

    

    cin>>t;



    

    while(t--)
    {
        cin>>n>>k>>a;



        vector<pair<int,int>> trap;

        q = 1;

        for(i=0;i<n;++i)
        {
            if(q==1 && a[i]=='0')
            {
                q = 0;
                b = i;
            }
            else if(q==0 && a[i]=='1')
            {
                q = 1;
                trap.push_back({b,i});
            }
        }
        if(q==0)
        {
            if(b == 0)
            {
                cout<<a<<"\n";
                continue;
            }

            trap.push_back({b,n});

        }

        for(auto &it : trap)
        {
            b = it.second-it.first;
            
            if(it.first == 0)
            {
                b-=k;
                if(b>0)
                    i=b;
                else
                    i = 0;
                    
                for(;i<it.second;++i)
                    a[i] = '1';
            }
            else if(it.second==n)
            {
                q = 0;
                
                for(i=it.first;i<it.second && q<k;++i)
                {
                    a[i] = '1';
                    ++q;
                }
            }

            else
            {
                c = k;
                if(b%2==1)
                {
                    if((b - 1)/2 <k)
                    {
                        k = (b-1)/2;
                        b = 1;
                        
                    }
                    else
                    {
                        b-=(2*k);
                    }

                }
                else
                    b-=(2*k);
                q = 0;
                
                for(i=it.first;i<it.second && q<k;++i)
                {
                    a[i] = '1';
                    ++q;
                }

                q = 0;

                if(b>0)
                    i+=b;
                for(;i<it.second;++i)
                    a[i]='1';

                k =c;



            }
        }

        cout<<a<<"\n";


    }

    return 0;


}