#include<stdio.h>
#include<conio.h>
int main()
{
int f,l,i;
printf("Enter any 1st interval");
scanf("%d",&f);
printf("enter the 2nd interval");
scanf("%d",&l);
for(i=f;i<=l;i++)
{
if(i%2==1)
{
printf("%d is a odd interval",i);
}
return 0;
}
