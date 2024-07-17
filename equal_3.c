#include<stdio.h>
#include<stdlib.h>
int main() {
    float v1,v2,v3;
    int in,units,tens,hundreds;
    printf("Welcome!\nPlease enter your three digit number\n");
    scanf("%d",&in);
    units=in%10;
    v1=in/100;
    hundreds=(int)v1;
    v2=in%100;
    v3=v2-units;
    tens=v3/10;
    if (units>tens && tens>hundreds)
    {
        printf("ASCENDING");
    }
    else
    {
        printf("NOT ASCENDING");
    }
    return 0;
} 