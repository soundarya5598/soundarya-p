#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    int l,count=0,i,c;
    scanf("%s",&s);
    l=strlen(s);
    for(i=0;i<'/0';i++)
     {
        if(s[i]==' ')
        count++;
        
    }
   
    c=l-count;
    printf("%d",c);
    
    
}
