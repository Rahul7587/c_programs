#include<stdio.h>
#include<stdlib.h>
int main() {
    int num1,num2;
    printf("Welcome!\nPlease enter the frist number\n");
    scanf("%d",&num1);
    printf("Please enter the second number\n");
    scanf("%d",&num2);
    if (num1==num2)
    {
        printf("The number %d is equal to the number %d",num1,num2);
    }
    else
    {
        printf("The given numbers %d and %d are not equal",num1,num2);
    }
    return 0;    
}