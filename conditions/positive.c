#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
  scanf("%d", &n);
  if(n>0)
  printf("positive number");
  else if(n<0)
  printf("negative number");
else
  printf("zero");
  return 0;
}