#include<stdio.h>
#include<stdlib.h>
int main() {
    int no_of_asterisks,i=0;
    printf("Enter the no of asterisks needed:");
    scanf("%d",&no_of_asterisks);
    while (no_of_asterisks>i)
    {
        printf("*");
        i++;
    }
    return 0;
}