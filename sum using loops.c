#include<stdio.h>
#include<stdlib.h>
int main() {
    float in,total=0;
    printf("Enter your number:\nEnter 0 if entries are over");
    scanf("%f",&in);
    while (in!=0)
    {
        total=total+in;
        printf("Enter your number:\nEnter 0 if entries are over");
        scanf("%f",&in);
        
    }
    if (in==0)
    {
        printf("Total=%f\n",total);
    }
    else
    {
        printf("ERROR.. Please check your entries\n");
    }
    printf("Thank you!");
    return 0;
}