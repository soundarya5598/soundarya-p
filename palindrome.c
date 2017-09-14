#include<stdio.h>
#include<conio.h>
int main()
{
int t,n,rev=0,rem;
printf("enter the integer");
scanf("%d",&n);
t=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(t==rev)
{
printf("the number is palindrome%d",n);
}
else
{
printf("the integer is not palindrome%d",n);
}
return 0;
}
