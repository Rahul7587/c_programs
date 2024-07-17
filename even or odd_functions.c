/*This program will predict wheather the number is 
  even or odd using functions*/
#include<stdio.h>
#include<stdlib.h>
int even_odd(int num)
{
    if (num%2==0)
    {
        return 1;//It will print 1 ,if the number is even
    }
    else
    {
        return 0;//It will print 0 ,if the number is odd
    }
}
int main()
{
    int in;
    printf("Enter a number :");
    scanf("%d",&in);
    printf("%d",even_odd(in));
    return 0;
}