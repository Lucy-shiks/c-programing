//program to determine if a number is divisible by 5
#include<stdio.h>
int main()
{
int num;
printf("the num:");
scanf("%d",&num);
// it is true if the num is completely divisible by 5
if (num%5==0)
printf("%d is divisible.",num);
else
printf("%dis not divisible.",num);
return 0;
}