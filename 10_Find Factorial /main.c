/**
Factorial program in c using for loop 
*/
 
#include<stdio.h>
int main(){
  int i,f=1, num;
 
  printf("Enter a natural number: ");
  scanf("%d", &num);
 
  for(i=1;i<=num;i++)
    f = f * i;
 
  printf("%d! = %d\n", num, f);
  return 0;
}
/*
OUTPUT:
Enter a natural number: 5
5! = 120
*/