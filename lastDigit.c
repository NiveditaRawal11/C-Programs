#include<stdio.h>
int main()
{
int x,res=0;
printf("Enter number:");
scanf("\n%d",&x);
res=x%10;
printf("Last digit of %d is %d.",x,res);
return 0;
}