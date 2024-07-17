#include<stdio.h>
#include<stdlib.h>
/* \t-used to provide a tab space 
   \n-used to start in a new line*/
int main() {
    int in,i,j,out=1;
    printf("Enter the length of the side needed:");
    scanf("%d",&in);
    system("cls");
    for (i=1;i<=in;i++)//initial variable
    {
        for (j=1;j<=i;j++)/*secondary variable used to refine more particular case
                            inside the primary variable, here in the loop statement 
                            of the second variable we took it in the pov of the
                            primary variable*/
        printf("%d\t",j);
        printf("\n");
    }
    return 0;
}