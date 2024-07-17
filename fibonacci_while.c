/*This program helps in printing a fibonacci series*/
#include<stdio.h>
#include<stdlib.h>
int main() {
    int i,no,t1=0,next_term,t2=1;
    printf("Enter the number of terms :");
    scanf("%d",&no);
    printf("Fibonacci series\n");
    i=0;
    while (i<=no)
    {
        printf("%d\t",t1);
        next_term=t1+t2;
        t1=t2;
        t2=next_term;
        i++;
    }
    return 0;
}