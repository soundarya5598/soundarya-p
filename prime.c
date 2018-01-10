#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,flag=0;
printf("enter any number");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%2==0)
{
flag=1;
}
if(flag==0)
{
printf("the num is prime",n);
}
else
{
printf("the number is not prime",n);
}
return 0;
}
}
