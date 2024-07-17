#include<stdio.h>
#include<stdlib.h>
int main() {
    float grade;
    printf("Enter your grade:");
    scanf("%f",&grade);
    while (grade<=0 || grade>=100)
    {
         printf("Enter your grade:");
         scanf("%f",&grade);
    }
    printf("Thanks!You have entered %f, which is a legal grade",grade);
    return 0;
}