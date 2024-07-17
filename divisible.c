#include<stdio.h>
#include<stdlib.h>
int main() {
    int a,b,c;
    printf("Welcome!\nPlease enter your 3 numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    if ((b%a==0 || a%b==0) && (c%b==0 || b%c==0) && (c%a==0 || a%c==0))
    {
        printf("DIVISIBLE");
    }
    else
    {
        printf("NOT DIVISIBLE");
    }
    return 0;
}