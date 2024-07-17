/*This program helps in calculating the sum
  of the natural numbers*/
  #include<stdio.h>
  #include<stdlib.h>
  int main() {
    int num,i,total_sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    for (i=0;i<=num;i++)
    {
        total_sum=total_sum+i;
    }
    printf("The total sum is : %d",total_sum);
    return 0;
  }