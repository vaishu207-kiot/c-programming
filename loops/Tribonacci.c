#include<stdio.h>
int main(){
    int n, next, first=0, second=1, third=1;
     printf("Enter the number");
     scanf("%d", &n);

     printf("%d", first);
      printf("%d", second);
       printf("%d", third);
    
       for(int i=4; i<= n; i++)
       {
        next= first+ second+ third;
        
        
        printf("%d", next);

        first= second;
        second= third;
        third= next;

       }
        

       return 0;
}