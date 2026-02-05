#include<stdio.h>
int main(){
     int scores[5];
     int sum=0;

     printf("Enter 5 scores: \n");

     for(int i=0; i<5; i++){
        scanf("%d", &scores[i]);
        sum += scores[i];

     }
     printf("Total score = %d", sum);
     return 0;
}