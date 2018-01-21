#include<stdio.h>
int main()
{
int i,num,rem,n1,n2,t;
printf("enter the fist interval");
scanf("%d",&n1);
printf("enter the second interval");
scanf("%d",&n2);
for(i=n1+1;i<=n2;i++)
{
t=i:
num=0;
while(t!=0)
{
rem=t%10;
num=num+rem*rem*rem;
t=t/10;
}
if(i==num)
{
printf("%d",i);
}
return 0;
}
