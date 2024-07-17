#include<stdio.h>
int main() {
    int in;
    float v1,v2,v3,v4,v5,v6;
    /*in-input, out-output*/
    printf("Welcome\nPlease enter a three digit integer number\n");
    scanf("%d",&in);
    v1=in/100;
    v2=(int)v1,v3=in/10;
    v4=(int)v3;
    v5=v4-10*v2;
    v6=in-v4*10;
    printf("The sum of the digits of the three digit number is %f",v2+v5+v6);
    return 0;
}