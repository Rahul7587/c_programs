#include<stdio.h>
#include<stdlib.h>
int main() {
    int year;
    printf("Welcome!\nPlease enter the year\n");
    scanf("%d",&year);
    if (year%4==0 && year%100!=0 ||  year%400==0)
    {
        printf("The year is a leap year\n");
    }
    else
    {
        printf("The year is not a leap year\n");
    }
    printf("Thank you!");
    return 0;
}