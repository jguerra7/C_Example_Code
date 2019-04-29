/**
Fibonacci series in C using recursion 
*/
 
#include <stdio.h>
#include <stdlib.h>
 
int Fibonacci(int x) {
  if (x < 2){
    return x;
  }
  return (Fibonacci (x - 1) + Fibonacci (x - 2));
}
 
int main(void) {
  int number;
  printf( "Please enter a positive integer: ");
  scanf("%d", &number);
  if (number < 0)
    printf( "That is not a positive integer.\n");
  else
    printf("%d Fibonacci is: %d\n", number, Fibonacci(number));
  return 0;
}
 
 
/*
OUTPUT
Please enter a positive integer: 10
10 Fibonacci is: 55
 
*/