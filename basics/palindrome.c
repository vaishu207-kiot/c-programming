#include<stdio.h>
int main(){
  int n, temp, rev=0, digit;
  printf("Enter the number");
  scanf("%d", &n);
  temp =n;

    while (n > 0){
        digit= n % 10;   \\get last digit
        rev = rev * 10 + digit;
         n= n/ 10;         \\ remove
         
    }
    if(temp == rev)
       printf("palindrome  %d" , temp);
    else   
       printf("Not palindrome %d" ,temp);

    return 0;
}