#include<stdio.h> 
int main(){
int num,a,b,c,d,e,a1,b1,c1,d1,e1,sum; 
printf("Enter five Digit NUmber: ");
scanf("%d",&num);
 a = num/10;
 e1=num % 10;
 b= a/10;
 d1= a % 10;
 c = b/10;
 c1= b %10;
 d= c/10;
 b1= c %10;
 e= d/10;
 a1= d%10;
sum = a1+b1+c1+d1+e1;
printf("5 digit's sum: %d",sum);
    return 0;
}