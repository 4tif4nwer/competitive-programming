#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l,r,x,y;
    
    cin>>t;
        //cout.precision(30);
    bool f;

    while(t--)
    {
        cin>>n>>m;
        cin>>s;
        ll minx,miny,maxx,maxy;
        x = y = minx = miny = maxy = maxx = 0;



        for(i=0;i<s.size();++i){
            if(s[i]=='L')
                x-=1;
            else if(s[i]=='R')
                x+=1;
            else if(s[i]=='U')
                y-=1;
            else
                y+=1;
            minx = min(minx,x);
            maxx = max(maxx,x);
            miny = min(miny,y);
            maxy = max(maxy,y);

            if((maxx-minx)>m-1)
                break;
            if((maxy-miny)>n-1)
                break;
            
        }
        x = y = minx = miny = maxy = maxx = 0;

        for(j=0;j<i;++j){
            if(s[j]=='L')
                x-=1;
            else if(s[j]=='R')
                x+=1;
            else if(s[j]=='U')
                y-=1;
            else
                y+=1;
            minx = min(minx,x);
            maxx = max(maxx,x);
            miny = min(miny,y);
            maxy = max(maxy,y);
        }

        cout<<max(1ll,1-miny)<<" "<<max(1ll,1-minx)<<"\n";


        
    }
}
