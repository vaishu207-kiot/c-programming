#include<stdio.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int c1,c2,c3;
    int q1,q2,q3;
    int budget;
    scanf("%d %d",&c1,&q1);
    scanf("%d %d",&c2,&q2);
    scanf("%d %d",&c3,&q3);
    scanf("%d",&budget);
    float final=c1*q1+c2*q2+c3*q3;
    printf("Total (Before Tax): %.2f\n",final);
    float total=final+(final*10/100);
    printf("Total (After Tax): %.2f\n",total);
    

    if(total<=budget)
    {
       printf("Within Budget"); 
    }
    else{
        printf("Over Budget");
    }
    
    return 0;
}