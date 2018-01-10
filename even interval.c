#include<stdio.h>
#include<conio.h>
void main()
{
int l,f,i;
printf("enter the 1st interval");
scanf("%d",&l);
printf("enter the 2nd interval");
scanf("%d",&f);
for(i=l;i<=f;i++)
{
if(i%2==0)
{
printf("%d is a even interval",i);
}
return 0;
}
