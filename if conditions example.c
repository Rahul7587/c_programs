#include<stdio.h>
#include<stdlib.h>
int main() {
    float grade;
    printf("Welcome!\nPlease enter your grade\n");
    scanf("%f",&grade);
    if (grade>=60)
    printf("Congratulations! You have passed");
    else
    printf("Failed... Try again");
    return 0;
}   

