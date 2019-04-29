/**********************************************************************  
1. Printing ascii value using c program
2. C program to display ASCII values
3. C code for ASCII table
 
 **********************************************************************/
#include<stdio.h>
 
int main(){
 
 
  int i;
 
  for(i=0; i<=255; i++)
    printf("ASCII value of character %c: %d\n",i,i);
 
  return 0;
}