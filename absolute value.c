#include<stdio.h>
#include<stdlib.h>
int main() {
    /*prints absolute value of the input*/
    int in,out;
    printf("Welcome!\nPlease enter your integer number\n");
    scanf("%d",&in);
    if (in>=0)
    {
        printf("The absolute valve is %d\n",in);
    }
    else
    {
        printf("The absolute value is %d\n",out=(-1)*in);
    }
    printf("Thank you!");
    return 0;
}