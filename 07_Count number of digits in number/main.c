

/**
Write a C Program to Find the Number of Digits in an entered number 
*/
 
#include<stdio.h>
#include<string.h>
 
int main() {
   int num, digits;
   char ch[10];
 
   printf("\nEnter the Number : ");
   scanf("%d", &num);
 
   sprintf(ch, "%d", num);
 
   digits = strlen(ch);
   printf("\nNumber of Digits : %d\n", digits);
 
   return(0);
}
 
/*
OUTPUT
Enter the Number : 54321
 
Number of Digits : 5
 
*/
