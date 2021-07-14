#include <bits/stdc++.h>

using namespace std; 



int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long int t,n,l,r,i,j,z,c,m;

    char lr;

    cin>>t;

    while(t--)
    {
        cin>>n>>m;

        vector<long long int> ro,re,lo,le,ans(n);

        vector<pair<int,int>>a(n),loc(n);

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
            z = a[i].second;
            if(z==1)
            {
                if(a[i].first%2)
                    ro.push_back(i);
                else
                    re.push_back(i);
        
            }

            else
            {
                if(a[i].first % 2)
                {
                    if(ro.size()>0)
                    {
                        c = a[i].first - a[ro.back()].first;
                        c/=2;
                        ans[i] = c;
                        ans[ro.back()] = c;
                        ro.pop_back();

                    }
                    else
                        lo.push_back(i);
                    
                }
                else
                {
                    if(re.size()>0)
                    {
                        c = a[i].first - a[re.back()].first;
                        c/=2;
                        ans[i] = c;
                        ans[re.back()] = c;
                        re.pop_back();

                    }
                    else
                        le.push_back(i);
                }

            }

        }
        i = le.size();
        reverse(le.begin(),le.end());
        --i;
        while(i-1>=0)
        {
            c = (a[le[i]].first + a[le[i - 1 ]].first);

            c/=2;

            ans[le[i]] = c;

            ans[le[i - 1]] = c;

            le.pop_back();

            le.pop_back();

            i-=2;

        }

        i = lo.size();

        reverse(lo.begin(),lo.end());

        --i;

        while(i-1>=0)
        {
            c = (a[lo[i]].first + a[lo[i - 1 ]].first);

            c/=2;

            ans[lo[i]] = c;

            ans[lo[i - 1]] = c;

            lo.pop_back();

            lo.pop_back();

            i-=2;

        }

        i = re.size();

        --i;

        while(i-1>=0)
        {
            c = m - a[re[i]].first;

            c += (a[re[i]].first - a[re[i-1]].first)/2;

            ans[re[i]] = c;

            ans[re[i-1]] = c;

            re.pop_back();

            re.pop_back();

            i-=2;
        }


        i = ro.size();
        --i;

        while(i-1>=0)
        {
            c = m - a[ro[i]].first;
            c += (a[ro[i]].first - a[ro[i-1]].first)/2;
            ans[ro[i]] = c;
            ans[ro[i-1]] = c;
            ro.pop_back();
            ro.pop_back();

            i-=2;
        }

        

        if(le.size() && re.size())
        {
            j = m-a[re[0]].first;
            
                c = a[le[0]].first + j;
            c += abs(a[le[0]].first - a[re[0]].first)/2;

            ans[le[0]] = c;
            ans[re[0]] = c;
        }

        if(lo.size() && ro.size())
        {
            j = m-a[ro[0]].first;
            
                c = a[lo[0]].first + j;
            c += abs(a[lo[0]].first - a[ro[0]].first)/2;

            ans[lo[0]] = c;
            ans[ro[0]] = c;
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