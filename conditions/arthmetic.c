#include<stdio.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Sum: %d\n",a+b);
    printf("Difference: %d\n",abs(a-b));
    printf("Product: %d\n",a*b);
    if(a!=0 && b!=0)
    {
        printf("Quotient: %d\n",a/b);
        printf("Remainder: %d",a%b);
    }
    return 0;
}