#include<stdio.h>
#include<stdlib.h>
int main() {
    float grade;
    system("cls");
    do
    {
        printf("Enter your grade:");
        scanf("%f",&grade);
    }while (grade>100 || grade<0);
    printf("Thanks you have entered %.2f, which is a legal grade",grade);
    return 0;
}