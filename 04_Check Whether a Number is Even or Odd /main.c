/**
C Program to Check Whether a Number is Even or Odd by 
*/
#include <stdio.h>
int main()
{
  int number;
  printf("Enter an integer you want to check: ");
  scanf("%d",&number);
  if((number%2)== 0)      /* Checking whether remainder is 0 or not. */
    printf("%d is even.\n", number);
  else
    printf("%d is odd.\n", number);
  return 0;
}
 
 
/*
OUTPUT
Enter an integer you want to check: 3
3 is odd.
*/