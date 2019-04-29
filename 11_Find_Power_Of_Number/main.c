/**
C program to find power of two numbers without using built in functions pow 
*/

#include<stdio.h>

int Power(int c, int d)
{
  int pow=1;
  int i=1;
  while(i<=d)
  {
    pow=pow*c;
    i++;
  }
  return pow;
}

int main()
{
  int result,b,c;
  printf("Enter the number\n");
  scanf("%d",&b);
  printf("Enter the power\n");
  scanf("%d",&c);

  result= Power(b,c);
  printf("Value of %d^%d = %d \n",b,c,result);
 
}

/*
OUTPUT
Enter the number
5
Enter the power
2
Value of 5^2 = 25
*/