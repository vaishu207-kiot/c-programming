 #include<stdio.h>
 #include<math.h>
 int main(){
     int n, temp, digit, sum =0, count =0;
     scanf("%d", &n);
      temp =n;
       while (temp !=0){
        temp/=10;
        count++;

       }
       temp =n;
       while(temp !=0){
        digit= temp% 10;    
        sum =sum+(digit * digit* digit);
         temp /=10;

       }
       if(sum == n)
       printf("Armstrong number");
    else
    printf("Not Armstrong");
return 0;
 }