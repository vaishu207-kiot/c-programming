#include<stdio.h>
int squareSum(int n)
{
    int sum=0;
    while(n){
        int d= n % 10;
        sum += d*d;
        n/= 10;
    }
    return sum;
}