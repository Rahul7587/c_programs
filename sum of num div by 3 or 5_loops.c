/*This progorm helps in calculating the sum of numebers 
  divisible by either 3 or 5*/
  #include<stdio.h>
  #include<stdlib.h>
  int main() {
    int num,i,total_sum=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    for (i=0;i<=num;i++)
    {
        if (i%3==0 || i%5==0)
        {
            total_sum=total_sum+i;
        }
    }
    printf("Total sum = %d",total_sum);
    return 0;
  }