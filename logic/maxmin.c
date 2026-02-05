#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
scanf("%d",&n);
n = abs(n);
int max=0;
int min=9;
if(n==0){
    printf("0 0\n");
    return 0;
}
while(n>0){
    int digit=n%10;
    if(digit>max)
        max=digit;
    if(digit<min)
        min=digit;
    n=n/10;
}
printf("%d %d\n",max,min);
return 0;
}