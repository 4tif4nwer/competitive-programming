#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_io ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

int main()
{
    //Fast_io;

    string s;

    ll t,z,i,j,n,op,itr;
    
    cin>>t;
    
    vector<pair<ll,ll>> cp;
    vector<ll> td;
    while(t--)
    {
        cin>>n;
        vector<ll> a(n);
        cp.clear();
        td.clear();
        
        ll temp[n];
        for(i=0;i<n;++i){
            cin>>a[n-i-1];
            
        }
    
        
        vector<ll> nice;
        
        i=0;
        
        
        while(!a.empty()){
            
            op = a.size();
            op--;//cout<<a[op]<<" "<<a.size()<<endl;
            z = a[op];
            i++;
            a.pop_back();
            if(nice.size()==0){
                nice.push_back(z);
            }
            else if(z!=nice[0]){

                nice.push_back(z);
                
            }
            else{
                td.push_back(2*nice.size());
                itr = 1;
                j = i;
                while(itr<nice.size()){
                    cp.push_back({i,nice[itr]});
                    a.push_back(nice[itr]);
                    i++;
                    itr++;
                }
                nice.clear();
            }
            
            
            

        }

        if(!nice.empty()){
            cout<<-1<<"\n";
            continue;
        }
        cout<<cp.size()<<"\n";
        for(auto &it : cp){
            cout<<it.first<<" "<<it.second<<"\n";
        }
        cout<<td.size()<<"\n";
        for(auto &it : td){
            cout<<it<<" ";
        }
        cout<<"\n";


    }
}
