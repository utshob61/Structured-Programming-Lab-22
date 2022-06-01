#include<stdio.h>
int main(){
int num,a,b,c,d,a1,b1,c1,d1,sum; 
printf("Enter five Digit NUmber: ");
scanf("%d",&num);
 a = num/10;
 d1=num % 10;
 b= a/10;
 c1= a % 10;
 c = b/10;
 b1= b %10;
 d= c/10;
 a1= c %10;
sum = a1+d1;
printf("The sum is: %d",sum);

    return 0;
}