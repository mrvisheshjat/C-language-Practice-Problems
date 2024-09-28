#include <stdio.h>

int main()
{
    int marks;

    printf("Enter your marks :");
    scanf("%d", &marks);

    if(marks>=90 && marks<=100)
    {
        printf("A grade, CONGRATES");
    }
    else if(marks>=60 && marks<90)
    {
        printf("B grade, work more btw good job");
    }
    else if(marks>=40 && marks<60)
    {
        printf("C grade, need more focus");
    }
    else if(marks>=11 && marks<40)
    {
        printf("Fail, Study More..!!");
    }
    else if(marks<=10)
    {
        printf("go to hell asshole..!!");
    }
    else{
        printf("Invalid number please enter number from (1 to 100)");
    }
    return 0;
}