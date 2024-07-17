/*This program helps in printing numbers in order and
  vice-versa*/
  #include<stdio.h>
  #include<stdlib.h>
  int main() {
    int num,i,out;
    printf("Enter a number:");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {
        printf("%d\t",i);
    }
    printf("\n");
    for (i=0;i<num;i++)
    {
        out=num-i;
        printf("%d\t",out);
    }
    return 0;
  }