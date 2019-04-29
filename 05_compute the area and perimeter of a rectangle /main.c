
/**********************************************************************
 * Write a program to compute the area and perimeter of a rectangle
 * 
 **********************************************************************/
 
#include <stdio.h>
 
int width;          /* width of rectangle in inches */
int height;         /* height of rectangle in inches */
 
int area;           /* area of rectangle */
int perimeter;      /* perimeter of rectangle */
 
int main() {
  
  printf("Input an integer Width: \n");
  scanf("%d", &width);
  printf("Input an integer height: \n");
  scanf("%d", &height);
  
  
 
  area = width * height;
  printf("area = %d square inches\n", area);
 
  perimeter = (width * 2) + (height * 2);
  printf("perimeter = %d inches\n", perimeter);
 
  return(0);
}
 
/*
 
OUTPUT:
input an integer Width 5
input an integer Height 3
area = 15 square inches
perimeter = 16 inches
 
*/
