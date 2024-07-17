#include<stdio.h>
#include<stdlib.h>
int main() {
    float price,total_price;
    do
    {
        printf("Enter the price:");
        scanf("%f",&price);
        total_price=total_price=price;
    }while (price!=0);
    printf("The total price of all the items is %f",total_price);
}
