#include<stdio.h>

int main()
{
    int num, i, ans;

    printf("***** MULTIPLACATION TABLE *****\n");
    printf("Enter an number: ");
    scanf("%d", &num);

    for(i=1; i<11; i++)
    {
        ans = num * i;
        printf("%d * %d = %d\n", num, i, ans);
    }
    return 0;
}