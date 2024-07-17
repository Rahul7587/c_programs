/*This code helps in writing the exact reverse of a three digit number-
try to understand the mathematical operations involved in the-
following program'this program holds good for any three digit
numbre*/  

  #include<stdio.h>
  int main() {
    int in,out,units,tens,hundreds;
    float v1,v2,v3;
    printf("Welcome\nPlease enter your three digit number\n");
    scanf("%d",&in);
    //declaration
    v1=in/100;
    hundreds=(int)v1;
    units=in%10;
    tens=(in-(100*hundreds+units))/10;
    out=100*units+10*tens+hundreds;
    printf("The reverse of the given three digit number is %d\nThank you\n",out);
    printf("The reversed nummber of the given number %d is %d%d%d",in,units,tens,hundreds);
    return 0;
 }