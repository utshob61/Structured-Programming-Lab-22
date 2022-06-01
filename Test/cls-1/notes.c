#include<stdio.h>
int main(){
int amount,ten,fifty,hundred;
printf("Enter the amount: ");
scanf("%d",&amount);
ten=amount/10;
fifty=amount/50;
hundred=amount/100;
printf("The cashier Will give Ten note: %d\nFifty note: %d\nHundred note: %d",ten,fifty,hundred);

    return 0; 
}