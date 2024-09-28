#include<stdio.h>
int main(){

    int choice, qty, total=0;
    printf("\n\t**** WELCOME TO OUR RESTAURANT ****\n\t");
    printf("\nMENU CARD\n");
    printf("\n\tPRODUCT\t\t\tPRICE\n\n1. ORANGE JUICE\t\t\t20Rs.\n2. MILK SHAKE\t\t\t50Rs.\n3. COFFEE\t\t\t30Rs.\n4. TEA\t\t\t\t10Rs.\n5. ICE-CREAM\t\t\t40Rs.\n\nSELECT ANYONE : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("ORANGE JUICE SELECTED, PLEASE! Enter the Quantity : ");
        scanf("%d", &qty);
        total = qty * 20;
        printf("Total Amount For Pay : %d", total);
        break;
    case 2:
        printf("MILK SHAKE SELECTED, PLEASE! Enter the Quantity : ");
        scanf("%d", &qty);
        total = qty * 50;
        printf("Total Amount For Pay : %d", total);
        break;
    case 3:
        printf("COFFEE SELECTED, PLEASE! Enter the Quantity : ");
        scanf("%d", &qty);
        total = qty * 30;
        printf("Total Amount For Pay : %d", total);
        break;
    case 4:
        printf("TEA SELECTED, PLEASE! Enter the Quantity : ");
        scanf("%d", &qty);
        total = qty * 10;
        printf("Total Amount For Pay : %d", total);
        break;
    case 5:
        printf("ICE-CREAM SELECTED, PLEASE! Enter the Quantity : ");
        scanf("%d", &qty);
        total = qty * 40;
        printf("Total Amount For Pay : %d", total);
        break;
    
    default:
        printf("We are Sorry, for this....");
        break;
    }
    return 0;
}