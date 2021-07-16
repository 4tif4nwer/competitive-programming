#include <bits/stdc++.h>

using namespace std; 



int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long int t,n,l,r,i,j,z,c,m,k;

    char lr;

    cin>>t;

    while(t--)
    {
        cin>>n>>m;

        vector<long long int> ro,re,lo,le,ans(n);

        vector<pair<int,int>>a(n),loc(n);

        vector<int> even,odd;

        for(i=0;i<n;++i)
        {
            cin>>z;
            a[i].first=z;
            loc[i].first=z;
            loc[i].second = i;
        }

        for(i=0;i<n;++i)
        {
            cin>>lr;
            if(lr=='R')
                a[i].second = 1;
            else
                a[i].second = -1;
        }

        sort(a.begin(),a.end());
        sort(loc.begin(),loc.end());

        for(i=0;i<n;++i)
        {
            if(a[i].first%2)
            {
                if(a[i].second==1)
                {
                    odd.push_back(i);

                }
                else
                {
                    if(odd.empty())
                    {
                       odd.push_back(i); 
                    }
                    else
                    {
                        j = odd.back();
                        odd.pop_back();
                        k = a[j].first;
                        if(a[j].second == -1)
                        {
                            k = -k;
                        }
                        ans[i]=ans[j] = (a[i].first-k)/2;

                    }
                }
            }
            else
            {
                if(a[i].second==1)
                {
                    even.push_back(i);

                }
                else
                {
                    if(even.empty())
                    {
                       even.push_back(i); 
                    }
                    else
                    {
                        j = even.back();
                        even.pop_back();
                        k = a[j].first;
                        if(a[j].second == -1)
                        {
                            k = -k;
                        }
                        ans[i]=ans[j] = (a[i].first-k)/2;

                    }
                }
            }

        }

        while(even.size()>1)
        {
            i = even.back();
            even.pop_back();
            j = even.back();
            even.pop_back();
            k = m + (m - a[i].first);
            k-=(a[j].second == 1 ? a[j].first : -a[j].first);
            k/=2;

            ans[i]=ans[j]=k; 
               
        }
        while(odd.size()>1)
        {
            i = odd.back();
            odd.pop_back();
            j = odd.back();
            odd.pop_back();
            k = m + (m - a[i].first);
            k-=(a[j].second == 1 ? a[j].first : -a[j].first);
            k/=2;

            ans[i]=ans[j]=k; 
               
        }

        int final[n];
        
        i=0;

        for(auto &it:ans)
            {
                if(!it)
                    final[loc[i].second]=-1;
                else
                    final[loc[i].second] = it;
                ++i;


            }

        for(auto &it : final)
            cout<<it<<" ";

        cout<<"\n";




        

        

        
        
    }
    

}