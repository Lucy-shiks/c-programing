//program to determine if a number is positive or negative
#include<stdio.h>
int main()
{
int num;
printf("enter the num:");
scanf("%d",&num);
if(num>=0)
printf("%dis positive num\n",num);
else
printf("%d is negative num\n",num);
}