#include<stdio.h>
#include<stdlib.h>
/*This is an example for truth table*/
int main() {
    float grade,money;
    printf("Welcome!\nPlease enter your grade\n");
    scanf("%f",&grade);
    printf("Please enter your current balance\n");
    scanf("%f",&money);
    if (grade>=90 && money<=50)
    {
        printf("You are eligible for the reward");
    }
    else
    {
        printf("You are not eligible for the reward\nBetter luck next time...");
    }
    return 0;
}