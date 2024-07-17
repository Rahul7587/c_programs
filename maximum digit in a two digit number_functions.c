/*This program helps in finding the maximum and minimum digit 
  in a two digit number*/
  #include<stdio.h>
  #include<stdlib.h>
  void max_digit(int num)
  {
    int tens;
    int units;
    if (num>99 || num<10)
    {
        printf("The entered number is not a two digit number");
    }
    else
    {
        units=num%10;
        tens=(num-units)/10;
        if (units>tens)
        {
            printf("The maximum digit is %d",units);
        }
        else
        {
            printf("The maximum digti is %d",tens);
        }
    }
  } 
  int main() {
    int in;
    printf("Enter a two digit number :");
    scanf("%d",&in);
    max_digit(in);
    return 0;
  }