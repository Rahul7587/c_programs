/*This program writes the multiplication tables upto 10 multiples*/
#include<stdio.h>
#include<stdlib.h>
int main() {
    int num,i,product;
    printf("Enter a number");
    scanf("%d",&num);
    for (i=0;i<=10;i++)
    {
        product=num*i;
        printf("%d*%d=%d\n",num,i,product);
    }  
    return 0;
}