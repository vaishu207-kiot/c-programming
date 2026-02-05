#include<stdio.h>
int main(){
    int arr[]= {3,0,1};

    int n= 3;
    int sum =0;

    for(int i=0; i<n; i++){        sum += arr[i];
    }
    int excepted = n*(n + 1)/2;
    printf("missing number = %d", excepted -sum);
      return 0;
}
