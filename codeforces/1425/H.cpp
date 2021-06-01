#include<bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    

    long long int t,a,b,c,d;



   // string a;

    

    cin>>t;



    

    while(t--)
    {
        cin>>a>>b>>c>>d;

        if((a+b)%2==0)
        {
            if((a+d)==0)
            {
                cout<<"Tidak Tidak Ya Tidak\n";
                continue;

            }
            else if((b+c)==0)
            {
                cout<<"Tidak Tidak Tidak Ya\n";
                continue;


            }
            else
            {
                cout<<"Tidak Tidak Ya Ya\n";
                continue;
            }



        }

        else
        {
            if((a+d)==0)
            {
                cout<<"Tidak Ya Tidak Tidak\n";
                continue;

            }
            else if((b+c)==0)
            {
                cout<<"Ya Tidak Tidak Tidak\n";
                continue;


            }
            else
            {
                cout<<"Ya Ya Tidak Tidak\n";
                continue;
            }
        }


    }

    return 0;


}