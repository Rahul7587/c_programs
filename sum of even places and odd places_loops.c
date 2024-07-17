/*This program helps in calculating the sum of all the even and odd 
  digits respectively*/
  #include<stdio.h>
  #include<stdlib.h>
  int main() {
    int num1,num2,i,odd_remainder,even_remainder,sum_even=0,sum_odd=0;
    printf("Enter a number :");
    scanf("%d",&num1);
    while (num1>0)
    {
        odd_remainder=num1%10;
        num1=num1/100;
        sum_odd=sum_odd+odd_remainder;
    }
    printf("Sum of the odd digits:%d\n",sum_odd);
    printf("Please re-enter the number to find the sum of the even digits :");
    scanf("%d",&num2);
    while (num2>0)
    {
        num2=num2/10;
        even_remainder=num2%10;
        sum_even=sum_even+even_remainder;
        num2=num2/10;
    }
    printf("Sum of the even digits:%d",sum_even);
    return 0;
  }