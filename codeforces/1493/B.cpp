#include<bits/stdc++.h>

using namespace std;

int h,m,h1,m1;

void incrementtime()
{
    if(m1 == m - 1)
    {
        m1=0;
        if(h1 == h -1)
        {
            h1 = 0;
            return;
            
        }

        h1++;
    }
    else
        ++m1;


}





int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a[10] = {0,1,5,-1,-1,2,-1,-1,8,-1};

    long long int d1,d2,d3,d4,t;    

    cin>>t;

    string s;

    while(t--)
    {
        cin>>h>>m;

        cin>>s;

        bool f = 1;

        h1 = (s[0]-'0')*10 + (s[1]-'0');

        m1 = (s[3]-'0')*10 + (s[4]-'0');

        while(1)
        {
            

            
            if(h1==0 && m1==0)
                break;
            d1 = a[h1/10];
            d2 = a[h1%10];
            d3 = a[m1/10];
            d4 = a[m1%10];

            if(d1>=0&&d2>=0&&d3>=0&&d4>=0)
            {
                if((d2*10+d1)<m && (d3 + d4*10)<h)
                    break;
            }
            incrementtime();

            

        }

        cout<<h1/10<<h1%10<<":"<<m1/10<<m1%10<<"\n";






    }

    return 0;


}
