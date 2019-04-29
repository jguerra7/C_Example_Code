/**
C Program to Reverse String 
*/
 
#include <stdio.h>
#include <string.h>
 
void ReverseString(char *str) {
  /* skip null */
  if (str == 0) {
    return;
  }
 
  /* skip empty string */
  if (*str == 0){
    return;
  }
 
  /* get range */
  char *start = str;
  char *end = start + strlen(str) - 1; /* -1 for \0 */
  char temp;
 
  /* reverse */
  while (end > start) {
    /* swap */
    temp = *start;
    *start = *end;
    *end = temp;
 
    /* move */
    ++start;
    --end;
  }
}
 
 
int main(void) {
  char s1[] = "Reverse me!";
  char s2[] = "abcde";
  char s3[] = "abcd";
  char s4[] = "abc";
  char s5[] = "";
 
  ReverseString(0);
 
  ReverseString(s1);
  ReverseString(s2);
  ReverseString(s3);
  ReverseString(s4);
  ReverseString(s5);
 
  printf("%s\n", s1);
  printf("%s\n", s2);
  printf("%s\n", s3);
  printf("%s\n", s4);
  printf("%s\n", s5);
 
  return 0;
}
 
/*
OUTPUT:
!em esreveR
edcba
dcba
cba
*/