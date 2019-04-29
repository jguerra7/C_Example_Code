/**********************************************************************  
1. Reverse of a number in c using while loop
2. C program to reverse the digits of a number
3. Write a c program to reverse a given number
4. C program to find reverse of a number
 **********************************************************************/
#include<stdio.h>
int main(){
  int number;
  int r;
  int reverse = 0;
 
  printf("Enter a number: ");
  scanf("%d", &number);
 
  while(number){
      r=number%10;
      reverse=reverse*10+r;
      number=number/10;
    }
 
  printf("Reversed number is : %d \n",reverse);
  return 0;
}
 
 
/*
 
OUTPUT:
Enter a number: 987654321
Reversed number is : 123456789
 
 
*/