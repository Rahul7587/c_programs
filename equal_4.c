#include<stdio.h>
#include<stdlib.h>
int main() {
    float in;
    printf("Welcome!\nPlease enter your number\n");
    scanf("%f",&in);
    if (in>0)
    {
        printf("1");
    }
    else if (in<0)
    {
        printf("-1");
    }
    else
    {
        printf("0");
    }
    return 0;
}