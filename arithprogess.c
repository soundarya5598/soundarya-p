#include<stdio.h>
int main()
{
int a,b,c,sum=0,i,d;
scanf("%d",&d);
scanf("%d%d",&a,&b);
c=a+b;
for(i=0;i<d;i++)
{
sum=sum+c;
}
printf("%d",sum);
}
