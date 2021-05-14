#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t,i,j,k,a,b;
    string s;

    cin>>t;
    while(t--)
    {
    	cin>>a>>b;
    	cin>>s;

    	k=s.size();

    	vector<int> g;

    	int as=0,bs=0;

    	bool f = 0;

    	for(i=0;i<k;++i)
    		if(s[i]=='1')
    			break;

    	for(j=0;i<k;++i)
    	{
    		if(s[i]=='1'&&!f)
    		{
    			f=1;
    			++as;

    			if(j)
    				g.push_back(j);

    			j=0;
    			
    		}
    		else if(s[i]=='0')
    		{
    			f=0;
    			++j;
    		}
    	}
    	for(auto &it : g)
    	{
    		
    		if(it*b<a)
    		{
    			--as;
    			bs+=it;
    		}
    	}

    	cout<<bs*b+as*a<<"\n";




    }
}

    