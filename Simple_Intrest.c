#include <stdio.h>
int main()
{
    float Principle, Intrest, Time, SimpleIntrest;

    printf("Enter Your Principle Amount :");
    scanf("%f", &Principle);

    printf("Enter Your Rate Per Annum : ");
    scanf("%f", &Intrest);

    printf("Enter Your Time : ");
    scanf("%f", &Time);

    printf("Simple Interest is : %f", SimpleIntrest = (Principle * Intrest * Time) / 100);
    return 0;
}