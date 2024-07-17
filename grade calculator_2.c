#include<stdio.h>
#include<stdlib.h>
int main() {
    float grade;
    printf("Welcome!\nPlease enter your grade\n");
    scanf("%f",&grade);
    if (grade>=80)
    printf("Excellent!");
    else if (grade>=60)
    printf("Well done...still need improvement");
    else
    printf("Sorry you FAILED!");
    return 0;
}