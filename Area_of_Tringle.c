#include <stdio.h>
#include <math.h>
int main()
{
  double a, b, c, semiperimeter, area;

  printf("\nEnter sides of a triangle :\n");
  scanf("%lf%lf%lf", &a, &b, &c);

  semiperimeter = (a+b+c)/2;

  area = sqrt(semiperimeter*(semiperimeter-a)*(semiperimeter-b)*(semiperimeter-c));

  printf("Area of the triangle = %.2lf\n", area);

  return 0;
}