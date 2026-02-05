#include<stdio.h>
int main(){
    int i,j,space,n;
     scanf("%d", &n);
    for(int i=1; i<=n;i++){
        for(space=4; space>i; space--){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}