#include<stdio.h>
#include<stdlib.h>
int main() {
    int hexdecimal;
    printf("Please enter your digit in hexadecimal format\n");
    scanf("%x",&hexdecimal);
    if (hexdecimal==1)
    {
        printf("The binary format is 0001\n");
    }
    else if (hexdecimal==0)
    {
        printf("The binary format is 0000\n");
    }
    else if (hexdecimal==2)
    {
        printf("The binary format is 0010\n");
    }
    else if (hexdecimal==3)
    {
        printf("The binary format is 0011\n");
    }
    else if (hexdecimal==4)
    {
        printf("The binary format is 0100\n");
    }
    else if (hexdecimal==5)
    {
        printf("The binary format is 0101\n");
    }
    else if (hexdecimal==6)
    {
        printf("The binary format is 0110\n");
    }
    else if (hexdecimal==7)
    {
        printf("The binary format is 0111\n");
    }
    else if (hexdecimal==8)
    {
        printf("The binary format is 1000\n");
    }
    else if (hexdecimal==9)
    {
        printf("The binary format is 1001\n");
    }
    else
    {
        printf("ERROR...");
    }
    printf("Thank you!");
    return 0;
}