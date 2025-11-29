#include<stdio.h>
int main()
{
int n,fact=1;
printf("enter a number:");
scanf("%d",&n);
for(i=0;i<=n;i++)
fact=fact*i;
printf("factorial of %d:"n,fact);
return 0;
}