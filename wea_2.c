#include<stdio.h>
int main() {
    float temp1,temp2;
    printf("Welcome to my TEMPERATURE CONVERTOR (please enter the temperature in fahrenheit)\n");
    scanf("%f",&temp1);
    temp2=(temp1-32)/1.8;
    printf("The temperature in celsius is %f\nThank you",temp2);
    return 0;
}