#include<stdio.h>
int main() {
    float a1,d,n,an;
    printf("Welcome\nPlease enter the first term of the arithmetic sequence\n");
    scanf("%f",&a1);
    printf("Please enter the common difference of the arithmetic sequence\n");
    scanf("%f",&d);
    printf("Please enter the number of the term you need in the given sequence\n");
    scanf("%f",&n);
    an=a1+(n-1)*d;
    printf("The n'th term of the arithmetic sequence is %f\nThank you",an);
    return 0;

}