#include<stdio.h>
int main() {
    int in,out;
    float units,tens,hundreds,v1;
    printf("Welcome\nPlease enter your three digit number\n");
    scanf("%d",&in);
    //declaration
    units=in%10;
    v1=in%100;
    tens=(v1-units)/10;
    hundreds=(in-v1)/100;
    out=units+tens+hundreds;
    printf("The sum of the digits of the given number is %d\nThank you",out);
    return 0;
}