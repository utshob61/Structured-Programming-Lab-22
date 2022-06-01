#include<stdio.h>
int main(){
double fahrenheit,centigrade;
printf("Enter the Temperature: ");
scanf("%lf",&fahrenheit);
centigrade = (5.0/9.0)*(fahrenheit-32);
printf("Temperature in Centigrade: %.2lf",centigrade);

    return 0; 
}