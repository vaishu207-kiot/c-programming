#include<stdio.h>

  bool isPalindrome(int temp){
    if(temp == 0|| (temp % 10 && temp != 0))
       return false;
  
    int rev=0 , n, digit;
    while(temp > rev)
    {
        
        rev = rev * 10 + digit;
         n= n/ 10;            
    }
    return (temp == rev|| temp == rev /10);
  }

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    if(isPalindrome(n))
      printf("true\n");
    else
    printf("false\n");
  return 0;
}