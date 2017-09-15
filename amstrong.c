#include<stdio.h>
#include<conio.h>
int main()
{
int t,n,rem,result=0;
printf("Enter the integer");
scanf("%d",&n);
t=n;
while(n!=0)
{
rem=n%10;
result=result+rem*rem*rem;
n=n/10;
}
if(t==result)
{
printf("the number is amstrong%d",n);
}
else
{
printf("the number is not amstrong number%d",n);
}
return 0;
}
