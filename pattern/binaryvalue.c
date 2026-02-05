#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int i=n; i>=1; i--){
        int digit;
        if(i % 2 ==1)
          digit =1;
        else
           digit=0;
        for(int j=1; j<=i; j++){
            printf("%d", digit);
            digit =1 -digit;      //toggle
        }
        printf("\n");
    }
    return 0;
}