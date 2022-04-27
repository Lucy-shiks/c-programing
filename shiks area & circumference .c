//program to find area and circumference
 # define PI=3.14;
#include<stdio.h>
int main()
{
int radius;
int circumference;
int area;
printf("enter radius\n");
scanf("%d",& radius);
area=3.14*radius*radius;
circumference=2*3.14*radius;
printf("the area of a circle is%d\n",area);
printf("the circumference of a circle is%d\n", circumference);
return 0;
}