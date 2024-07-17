#include<stdio.h>
#include<stdlib.h>
int main() {
    int a,b,c;
    printf("Welcome!\nPlease enter the first number\n");
    scanf("%d",&a);
    printf("Please enter the second number\n");
    scanf("%d",&b);
    printf("Please enter the third number\n");
    scanf("%d",&c);
    if (a==b &&b==c)
    {
        printf("All the above numbers are equal\n");
    }
    else
    {
        printf("The above numbers are not mutually equal\n");
    }
    printf("Thank you!");
    return 0;
}