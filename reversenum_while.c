/*This program helps in printing a number entered
  with reversed digits with the help of loops*/
  #include<stdio.h>
  #include<stdlib.h>
  int main() {
    int num,remainder,rev_num=0;
    printf("Enter a number:");
    scanf("%d",&num);
    while (num!=0)
    {
        remainder=num%10;
        rev_num=rev_num*10+remainder;
        num=num/10;
    }
    printf("%d",rev_num);
    return 0;
  }