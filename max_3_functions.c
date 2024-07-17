//This program helps in printing the maximum between 3 numbers
#include<stdio.h>
#include<stdlib.h>
int max_3() {
    int num1,num2,num3;
    printf("Enter three numbers :");
    scanf("%d%d%d",&num1,&num2,&num3);
    if (num1>num2)
    {
        if (num1>num3)
        return num1;
        else
        return num3;
    }
    else if (num2>num3)
    {
        if (num2>num1)
        return num2;
        else
        return num1;
    }
    else if (num3>num1)
    {
        if (num2>num3)
        return num2;
        else
        return num3;
    }
}
int main() {
    int max;
    max=max_3();
    printf("The maximum of the three numbers is %d",max);
    return 0;
}