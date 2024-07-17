/*This program prints a sequence of nines ,depending upon the given length*/
//Ex-lenght=3 ,prints 999
#include<stdio.h>
#include<stdlib.h>
int seq_nine(int lenght)
{
    if (lenght<=0)
    {
        printf("INPUT ERROR...");
    }
    else
    {
        while (lenght>0)
        {
            printf("9");
            lenght--;
        }
    }
}
int main()
{
    int in;
    printf("Enter the lenght of the sequence :");
    scanf("%d",&in);
    seq_nine(in);
    return 0;
}
