#include<stdio.h>
int main() {
    float temp1,temp2;
    printf("Welcome to my TEMPERATURE CONVERTOR (enter the temperature in celsius)\n");
    scanf("%f",&temp1);
    temp2=temp1*1.8+32;
    printf("The temperture in fahrenheit is %f\nThank you",temp2);
    return 0;
}