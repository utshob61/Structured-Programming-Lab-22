#include<stdio.h>
int main(){
double total_selling_price,total_profit,profit,cost_price;
printf("Enter the 15 items Selling price: ");
scanf("%lf",&total_selling_price);

printf("Enter total profit: ");
scanf("%lf",&total_profit);

profit=total_selling_price-total_profit;
cost_price=profit/15;

printf("One item price: %.2lf",cost_price);

    return 0;
}