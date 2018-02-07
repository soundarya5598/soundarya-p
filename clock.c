#include<stdio.h>
int main()
{
int min,hrs,kmin;
scanf("%d",&min);
hrs=min/60;
kmin=min%60;
printf("%d %d",hrs,kmin);
return 0;
}
