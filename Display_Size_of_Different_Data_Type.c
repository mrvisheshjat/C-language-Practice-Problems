#include <stdio.h>
int main()
{ 
  printf("\nint is %2d bytes \n", sizeof(short int));
  printf("\nlong int is %2d bytes \n", sizeof(long int));
  printf("\nfloat is %2d bytes \n", sizeof(float));
  printf("\ndouble is %2d bytes \n", sizeof(double));
  printf("\nlong double is %2d bytes \n", sizeof(long double));
  printf("\nchar is %2d bytes \n", sizeof(char));
  return 0;

} 