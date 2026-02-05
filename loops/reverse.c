#include<stdio.h>
int main(){
    int n, rev =0, digit;
    scanf("%d", &n);

    while(n != 0){
        digit =n% 10;
        rev =rev * 10+ digit;
        n/=10;

    }
    printf("Reversed number =%d", rev);
    return 0;
}