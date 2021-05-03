#include<stdio.h>
#include<string.h>
int main()
{
    char c[1000],n[2000];int k=0;
    scanf("%s", c);
    for(int i=0;i<strlen(c);i++)
    {
        if(c[i]>='A' && c[i]<='Z')
        c[i]+=32;
    }


    for(int i=0;i<strlen(c);i++)
    {
        if(c[i]!='a' && c[i]!='e' && c[i]!='i' && c[i]!='o' && c[i]!='u' && c[i]!= 'y')
        {
            n[k++]='.';
            
            n[k++]=c[i];
            
        }
    }

    for(int i=0;i<k;++i)
    	printf("%c",n[i] );

    
return 0;
}