#include<stdio.h>
#include<stdlib.h>
int main() {
    int in;
    printf("Welcome!\nPlease enter the number of the month\n");
    scanf("%d",&in);
    if (in==1)
    {
        printf("January");
    }
    else if (in==2)
    {
        printf("Febrauary");
    }
    else if (in==3)
    {
        printf("March");
    }
    else if (in==4)
    {
        printf("April");
    }
    else if (in==5)
    {
        printf("May");
    }
    else if (in==6)
    {
        printf("June");
    }
    else if (in==7)
    {
        printf("July");
    }
    else if (in==8)
    {
        printf("August");
    }
    else if (in==9)
    {
        printf("September");
    }
    else if (in==10)
    {
        printf("October");
    }
    else if (in==11)
    {
        printf("November");
    } 
    else if (in==12)
    {
        printf("December");
    }
    else
    {
        printf("ERROR...Please check your entry");
    }
}