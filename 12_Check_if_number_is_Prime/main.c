/**
C Program to Check If the number is Prime or not 
*/
 
#include<stdio.h>


int main() {
  int i,number;
  printf("Enter any num: ");
  scanf("%d", &number);
  if(number == 1) {
    printf("Smallest prime num is 2\n");
  }
  for(i=2;i<number;i++) {
    if(number%i == 0) {
      printf("Not prime number\n");
      break;
    }
  }
  if(number == i) {
    printf("Yes, Number is Prime\n");
    printf("\n");
  }
  return 0;
}
 
/*
OUTPUT:
Enter any num: 17
Yes, Number is Prime
*/