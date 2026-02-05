#include<stdio.h>
int sumofDigits(int n){
        int sum =0;
        while(n>0)
        {
        sum += n%10;
        n=n/10;
        }
    return sum;
}
int main(){
  int num, result;
  printf("Enter a number:");
  scanf("%d", &num);

  result = sumofDigits(num);
  printf("sum of Digits = %d", result);

  return 0;
}
