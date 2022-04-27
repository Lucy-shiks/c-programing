//function to find cube of a number
#include<stdio.h>
float cube( float num);//function prototype
int main()
{
  float input,output;
  printf("Enter a number:");
  scanf("%f",& input);
  output = cube(input); // calling function
  printf("\n The cube of %.2f is %.2f",input,output);
  return 0;
  }
  float cube (float num)//function definition
  {
  float num_cubed;
  num_cubed= num*num*num;
  return num_cubed;
}