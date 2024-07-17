#include<stdio.h>
int main() {
    float in,out;
    /*in-input data,out-out put data*/
    printf("Welcome\nPlease enter your given number\n");
    scanf("%f",&in);
    out=(int)in;
    printf("The integral part of the given number is \n%.1f\n",out);
    printf("The decimal part of the number is \n%f",in-(int)in);
    return 0;
}