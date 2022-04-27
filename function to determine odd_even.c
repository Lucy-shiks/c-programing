//Function to execute even and odd numbers
#include<stdio.h>
int even(int num);
int odd(int num);
int main()
{
int num;
printf("Enter any number");
scanf("%d",&num);
if(num%2==0)
{
printf("\n the number is even");
}
else
{
printf("\n the number is odd");
}
 return 0;
}
int even (int num)
{
int even_num;
even_num=num%2==0;
return even_num;
}
int odd(int num)
{
int odd_num;
odd_num=num%2!=0;
return odd_num;
}