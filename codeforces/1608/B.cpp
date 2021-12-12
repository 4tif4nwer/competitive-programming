#include <bits/stdc++.h>
#include<math.h>


using namespace std; 


int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long int t=1,k,z,i,j,n,m,att,h,ans;
    
    cin>>t;


    while(t--)
    {
        long long a,b;
        cin>>n>>a>>b;
        int s[n]={0};
        j = 1;

        if(a+b>n-2||a>b+1||b>a+1){
            cout<<-1<<"\n";
            continue;
        }

        if(a>=b)
        {
            j = n;
            i = 1;
            k = a;

            while(a>0){
                s[i] = j--;
                i+=2;
                a--;
            }
            if(k==0)
                goto x;
            if(k==b)
                s[n-1] = j--;
            x:
            i = 0;
            
            while(j!=0)
            {
                if(!s[i])
                    s[i] = j--;
                i++;
            }
        

        }
        else
        {
            j = 1;
            i = 1;

            while(b>0){
                s[i] = j++;
                i+=2;b--;
            }
            i = 0;
            while(j!=n+1)
            {
                if(!s[i])
                    s[i] = j++;

                i++;
            }
        }







        for(i=0;i<n;++i)
            cout<<s[i]<<" ";
        
        cout<<"\n";
        
    }
}