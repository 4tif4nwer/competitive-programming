#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main()
{
    Fast_io;

    string s;

    ll t=1,k,z,i,j,n,m,a,h,b,ans,l;
    
    //cin>>t;


    while(t--)
    {
        cin>>n;
        set<pair<ll,ll>> nice,good;
        set<pair<ll,ll>> :: iterator itr1,itr2;
        ll op,id = 1;

        while(n--){
            //cout<<"Querry : "<<n<<endl;
            cin>>op;
            if(op == 1){
                cin>>k;//cout<<"HI";
                nice.insert(make_pair(id,k));
                good.insert(make_pair(k,-id));

                id++;


            }
            else if(op==2){
                itr1 = nice.begin();
                cout<<(*itr1).first<<" ";
                itr2 = good.find({(*itr1).second,-(*itr1).first});
                good.erase(itr2);
                nice.erase(itr1);
            }
            else{
                itr1 = good.end();
                itr1--;
                cout<<-(*itr1).second<<" ";
                itr2 = nice.find({-(*itr1).second,(*itr1).first});
                nice.erase(itr2);
                good.erase(itr1);
            }
        }
        
    }
}
