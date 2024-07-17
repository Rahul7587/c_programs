#include<stdio.h>
int main() {
    float a1,d,n,sn;
    printf("welcome\nPlease enter the first term of the arithmetic sequence\n");
    scanf("%f",&a1);
    printf("Please enter the common difference of the arithmetic sequence\n");
    scanf("%f",&d);
    printf("Please enter the number of terms you need sum of\n");
    scanf("%f",&n);
    sn=(n/2)*(2*a1+(n-1)*d);
    printf("The sum the sequence upto the given number is %f",sn);
    return 0;
}