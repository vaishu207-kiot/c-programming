#include<stdio.h>
int main(){
    int n,i, first=0, second=1;
    printf("Enter a number:");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        printf("%d ",first);
         int next= first + second;
        first=second;
        second = next;
    }
    return 0;

}