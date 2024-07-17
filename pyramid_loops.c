/*This program prints pyramid*/
#include<stdio.h>
#include<stdlib.h>
int main() {
    int num,i,j,k,current_value=1,blank_spaces;
    printf("Enter the number of rows needed: ");
    scanf("%d",&num);
    blank_spaces=num-1;
    for (i=1;i<=num;i++)
    {
        for (j=blank_spaces;j>=1;j--)
        {
            printf(" ");
        }
        for (k=1;k<=i;k++)
        {
            printf("%d\t",current_value);
            current_value=current_value+1;
        }
        printf("\n");
        blank_spaces--;
    }
    return 0;
}