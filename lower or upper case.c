#include<stdio.h>
#include<stdlib.h>
int main() {
    char in;
    printf("Welcome!Please enter your character\n");
    scanf("%c",&in);
    if (in>= 'A' && in<= 'B')
    {
        printf("it is uppercase\n");
    }
    else if (in>= 'a' && in<= 'b')
    {
        printf("it is lowercase\n");
    }
    else if (in>= '0' && in<= '9')
    {
        printf("it is a digit\n");
    }
    else
    {
        printf("OTHER");
    }
    return 0;
}