/*This program helps in writing a sequence based upon two cases
  case(1) -->lenght<10 -->if lenght=3 ,then prints 123
  case(2) -->lenght>=10 -->if lenght=11 ,then prints 99999999999*/
#include<stdio.h>
#include<stdlib.h>
int seq(int lenght)
{
    int num=1;
    if (lenght<=0)
    {
        printf("INPUT ERROR...");
    }
    else if (lenght>0 && lenght<10)
    {
        while (lenght>0)
        {
            printf("%d",num);
            num++;
            lenght--;
        }
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
    seq(in);
    return 0;
}
