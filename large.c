#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("enter the integer");
scanf("%d%d%d",&a&b&c);
if(a>=b&&a>=c)
{
printf("the integer a is larger");
}
if(b>=c&&b>=a)
{
printf("the integer b is large");
}
if(c>=a&&c>=b)
{
printf("the integer c is large);
}
return 0;
}
