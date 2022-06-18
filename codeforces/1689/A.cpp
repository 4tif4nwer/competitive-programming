#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);


int main()
{
    Fast_io;

    string s,t,nice;

    ll q=1,k,z,i,j,n,m,a,h,b,ans,l,r,x,y;
    cin>>q;
        //cout.precision(30);
    bool f;

    while(q--)
    {
        cin>>n>>m>>k;
        cin>>s>>t;
        z = 0;
        nice = "";
        i = j = 0;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        while(i<n && j<m){

            if(s[i]<t[j] && z<k){
                if(z<1)
                    z = 1;
                else
                    z++;
                nice+=s[i];
                i++;
            }
            else if(s[i]>t[j] && z>-k){
                if(z>-1)
                    z =-1;
                else
                    z--;
                nice+=t[j];
                j++;
            }
            else if(s[i]==t[j]){
                if(z<=0){
                    nice+=s[i++];
                    z = 1;

                }
                else{
                    nice+=t[j++];
                    z = -1;
                }
            }
            else{
                if(z==k){
                    nice+=t[j++];
                    z = -1;
                }
                else{
                    nice+=s[i++];
                    z = 1;
                }
            }
        }
        

        cout<<nice<<"\n";
        //cout<<ans<<"\n";
    }
}
