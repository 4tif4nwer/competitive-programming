#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long int t=1,k,z,c,i,j,n;

    string s,fi,se;

    

    cin>>t;

    while(t--)
    {
        cin>>s;
        fi = se = s;
        n = 10;

        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(fi[i]!='0')
                {
                    fi[i]='1';
                }
                if(se[i]!='1')
                {
                    se[i] = '0';
                }
            }
            else
            {
                if(fi[i]!='1')
                {
                    fi[i]='0';
                }
                if(se[i]!='0')
                {
                    se[i]='1';
                }
            }
        }

        long long ft=0,st=0;  

        for(i=0;i<n;++i)
        {
            if(fi[i]=='1')
            {
                if(i%2==0)
                    ft++;
                else
                    st++;
            }

            if(abs(ft-st)>((9-i)/2))
            {
                if(i%2==1)
                    break;
                else
                {
                    if(ft>st && (ft-st)!=((9-i)/2 + 1) )
                        break;
                    else if(st>ft)
                        break;

                }
            }


        }
        j = i;
        ft = st = 0;
        for(i=0;i<n;++i)
        {
            if(se[i]=='1')
            {
                if(i%2==0)
                    ft++;
                else
                    st++;
            }

            if(abs(ft-st)>((9-i)/2))
            {
                if(i%2==1)
                    break;
                else
                {
                    if(ft>st && (ft-st)!=((9-i)/2 + 1) )
                        break;
                    else if(st>ft)
                        break;

                }
            }


        }

        j = min(i,j);

        if(j==10)
            j =9;


        cout<<j+1<<"\n";

        
    }
}