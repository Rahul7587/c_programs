/*The below program helps to calculate the higher powers upto 8 figures*/
/*consider the variable to be x-
x1=x^2
x2=x^4
x3=x^6
x4=x^8*/

#include<stdio.h>
#include<math.h>
int main() {
    float x,x1,x2,x3,x4;
    printf("Welcome\nPlease enter your number\n");
    scanf("%f",&x);
    x1=pow(x,2);
    x2=pow(x,4);
    x3=pow(x,6);
    x4=pow(x,8);
    printf("Given number to the power of 2 is %f\nGiven number to the power of 4 is %f\nGiven number to the power of 6 is %f\nGiven number to the power of 8 is %f\nThank you",x1,x2,x3,x4);
    return 0;
}