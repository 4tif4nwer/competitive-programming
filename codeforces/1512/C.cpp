#include <bits/stdc++.h>

using namespace std;



int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t,a,b,i,j,a1,b1;

    cin>>t;

    string s;

    while(t--)
    {
    	cin>>a>>b>>s;



    	j = a+b;

    	bool f = 1;

    	if(a%2&&b%2)
    		f=0;

		a1 =b1= 0;

    	if(j%2)
    	{
    		if(a%2)
    		{
    			if(s[j/2] == '1')
    				f = 0;
    			else
    			{
    				s[j/2]='0';
    				++a1;
    			}
    			
    		}
    		else
    		{
    			if(s[j/2] == '0')
    				f=0;
    			else
    			{
    				s[j/2]='1';
    				++b1;
    			}
    			
    		}
    	}
    	
    	
    	
    	for( i =0;(i<(j/2))&&f; ++i)
    	{
    		switch(s[i])
    		{
    			case '0':
    			a1+=2;
    			if(s[j-i-1]=='1')
    				f=0;
    			s[j-i-1]='0';


    			break;

    			case '1':
    			b1+=2;
    			if(s[j-i-1]=='0')
    				f=0;
    			s[j-i-1] = '1';
    			break;

    			case '?':
    			switch(s[j-i-1])
    			{
    				case '0':
    				a1+=2;
    				s[i]='0';
    				break;

    				case '1':
    				b1+=2;
    				s[i]='1';
    				break;
    			}

    			break;
    		}
    	}
    	if(a1>a||b1>b)
    		f=0;
    	if((a1 + b1 != (a+b))&&f)
    	{
    		a1 = (a-a1);
    		b1 = (b-b1);
    		for(i=0;i<j/2;++i)
    		{
    			if(s[i] == '?')
    			{
    				if(a1)
    				{
    					s[i] = s[j-i-1] = '0';
    					a1-=2;
    				}
    				else
    				{
    					s[i] = s[j-i-1] = '1';
    					b1-=2;
    				}
    			}
    		}
    	}
    	if(f)
    	cout<<s;
    else
    	cout<<-1;

cout<<"\n";


    }
    
    



    
    
}
