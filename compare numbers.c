#include<stdio.h>
#include<stdlib.h>
int main() {
    float num1,num2;
    printf("WELCOME!\nPLEASE ENTER THE FIRST NUMBER\n");
    scanf("%f",&num1);
    printf("PLEASE ENTER THE SECOND NUMBER\n");
    scanf("%f",&num2);
    if (num1>num2)
    printf("THE FIRST NUMBER IS GREATER THAN THE SECOND NUMBER");
    if(num1==num2)
    printf("BOTH THE NUMBERS ARE EQUAL");
    else
    printf("THE SECOND NUMBER IS GREATER THAN THE FRIST NUMBER\nTHANK YOU");
    return 0;
}