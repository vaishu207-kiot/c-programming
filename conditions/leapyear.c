#include<stdio.h>

int checkYear(int n
){
    if(n%400 == 0)
  printf("It is a leap year");
    else if(n% 100 == 0)
  printf("It is divisible by 100 but not 400 so, it is not leap year");
    else if(n% 4 == 0)
  printf("It is  divisible by 4 so ,it is a leap year");
    else 
     printf("otherwise not a leap year");
return 0;

}
int main(){
    int n;
    printf("Enter the year:");
    scanf("%d", &n);
    checkYear(n);
     return 0;
}