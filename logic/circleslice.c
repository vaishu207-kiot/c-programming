#include<stdio.h>
 
int numberofCuts(int n){
    if(n == 1)
    return 0;
   if(n % 2 ==0)
    return n/2;
   return n;
}
int main(){
    int n;
    printf("Enter number of slices:");
    scanf("%d", &n);

    int result = numberofCuts(n);
    printf("Minimum cuts needed :  %d", result);

    return 0;

}
