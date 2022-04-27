//program for determining if a number is even or odd
#include<stdio.h>

int main()
{
int num;
printf("the num:");
scanf("%d",&num);
//it is true if the num is completely divisible by 2
if (num %2==0)
printf("%dis even.",num);
else
printf("%dis odd.",num); 
    return 0;
}