#include<stdio.h>
#include<stdlib.h>
int main() {
    int num,power,out=1;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Enter the power:");
    scanf("%d",&power);
    while (power>0) {
        out=out*num;
        power=power-1;
    }
    printf("Answer is %d",out);
    return 0;
}