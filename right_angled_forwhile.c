#include<stdio.h>
#include<stdlib.h>
int main() {
    /*This program helps in drawing a right angled triangle with 
      each row having same element in increasing order*/
    int in,i,j;
    printf("Enter a number:");
    scanf("%d",&in);
    for (i=1;i<=in;i++)          /*Here the first for loop helps in creating a new row everytime, till the
                                   given loop condition is satisfied*/
    {
        j=i;
        while (j>0)              /*The nested while loop helps in filling each row, i.e for each row when 
                                   when (j=i) and j>0(which expires gradually) it prints the same no */
        {
            printf("%d",i);
            j--;
        }
        printf("\n");
    
    }
    return 0;
}