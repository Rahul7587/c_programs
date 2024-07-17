#include<stdio.h>
#include<stdlib.h>
int main() {
    float num1,num2;
    printf("Welcome\nPlease enter the numbers\n");
    scanf("%f %f",&num1,&num2);
    if (num1>num2)
       printf("The maximum of the given numbers is %f",num1);
    else
       printf("The maximum of the given numbers is %f",num2);
       return 0;
}
