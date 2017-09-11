#include<stdio.h>
#include<conio.h>
int main()
{
int i,fact=1,n;
printf("enter any integer");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
printf("factorial of number is%d",fact);
}
return 0;
}
