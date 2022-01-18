#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l;
    
    cin>>t;
    
    

    while(t--)
    {
        int d1,d2;
        cin>>s;
        //int l[26]={0};
        string p1="",p2="";
        ll p = 0;
        
        i = s.size();
        --i;
        --i;
        p1 = s.substr(0,i);
                //cout<<a<<endl;

        if(i+2<s.size())
            p2 = s.substr(i+2,int(s.size())-i-2);
        else
            p2 = "";
        a = int(s[i]-'0');
            
                b = int(s[i+1]-'0');
        d1 = (a+b)/10;
        d2 = (a+b)%10;
        //cout<<d1<<endl;
        bool f  = 0;
        if(d1>0)
            f = 1;
        for(;i>=0;--i){
            a = int(s[i]-'0');
            //cout<<a<<endl;
            b = int(s[i+1]-'0');

            
            if((a+b)/10>0){

                f = 1;
            }
            
        }

        if(!f){
            
            p1 = "";
            //p1 = s.substr(0,i);
            a = int(s[0]-'0');
            //cout<<a<<endl;
            b = int(s[1]-'0');

            i = 0;
            if(i+2<s.size())
                p2 = s.substr(i+2,int(s.size())-i-2);
            else
                p2 = "";
            d1 = (a+b)/10;
            d2 = (a+b)%10;
                
        }
        else{

            p1 = "";
            p2 = "";
            for(i=0;(i+1)<s.size();++i){
                a = int(s[i]-'0');
            
                b = int(s[i+1]-'0');
            
                if((a+b)/10>0){
                    p = i;

                    
                    d1 = (a+b)/10;
                    d2 = (a+b)%10;

                }
            }
            p1 = s.substr(0,p);
                    if(p+2<s.size())
                        p2 = s.substr(p+2,int(s.size())-p-2);
                    else
                        p2 = "";
        
        

        }cout<<p1;
        if(d1!=0)
            cout<<d1;
        cout<<d2<<p2<<"\n";
    }
}
