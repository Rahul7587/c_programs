#include<stdio.h>
#include<stdlib.h>
int main() {
    int a,b;
    printf("Welcome!\nPlease enter the first number\n");
    scanf("%d",&a);
    printf("Please enter the second number\n");
    scanf("%d",&b);
    if (a==b)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    return 0;   
}