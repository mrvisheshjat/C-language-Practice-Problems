#include<stdio.h>

int main()  
{  
    float bs;  //Basic selery
    float gs;  //Gross selery
    float da;  //Dearness allowance
    float hra; //house rent allowance
  
    printf("\nEnter basic salary :");  
    scanf("%f", &bs);  
  
    if(bs<5000)  
    {  
        hra = bs * 10 / 100;  
        da  = bs * 90 / 100;  
    }  
    else  
    {  
        hra = 600;  
        da  = bs * 95 / 100;  
    }  
  
    gs = bs + da + hra;  
  
    printf("Gross Salary is Rs %f\n", gs);  
  
    return 0;  
}