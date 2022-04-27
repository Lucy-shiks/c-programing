//program to find area and circumference of a circle
#include<stdio.h>
int main()
{
int length;
int width;
int area, perimeter;
printf("enter the length \n");
scanf("%d", &length);
printf("enter the width \n");
scanf("%d", &width);
perimeter=length+width+length+width;
area=length*width;
printf("the perimeter of the rectangle is%d\n", perimeter);
printf("the area of the rectangle is%d",area);
return 0;
}