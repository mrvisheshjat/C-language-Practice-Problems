#include <stdio.h>
int main() {
 
  float radius, area_of_circle, circumference_of_circle; 
  float PI = 3.14159;

  printf("\nEnter the Radius of Circle: ");
  scanf("%f", & radius);

  area_of_circle = PI * radius * radius;

  printf("area of circle = %f\n", area_of_circle);
  circumference_of_circle = 2 * PI * radius;

  printf("Circumference of Circle is = %f \n", circumference_of_circle);
  return 0;
}