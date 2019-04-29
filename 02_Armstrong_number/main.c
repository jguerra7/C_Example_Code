/**
C PROGRAM TO CHECK GIVEN NUMBER IS ARMSTRONG NUMBER OR NOT 
*/
 
#include <stdio.h>
 
 

int Power(int n, int r) {
   int c, p = 1;
 
   for (c = 1; c <= r; c++)
      p = p*n;
 
   return p;
}
 
int main() {
   int n, sum = 0, temp, remainder, digits = 0;
 
   printf("Input an integer : \n");
   scanf("%d", &n);
 
   temp = n;
   // Count number of digits
   while (temp != 0) {
      digits++;
      temp = temp/10;
   }
 
   temp = n;
 
   while (temp != 0) {
      remainder = temp%10;
      sum = sum + Power(remainder, digits);
      temp = temp/10;
   }
 
   if (n == sum)
      printf("%d is an Armstrong number.\n", n);
   else
      printf("%d is not an Armstrong number.\n", n);
 
   return 0;
}
 
 
/*
OUTPUT:
Input an integer :
1620
1620 is not an Armstrong number.
 
153
153 is an armstrong Number 
*/