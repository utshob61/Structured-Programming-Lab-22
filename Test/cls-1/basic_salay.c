#include<stdio.h>
int main(){
double basic_salary,dearnessallowance,house_rent,gross_salary;
printf("Enter Niloys basic salary: ");
scanf("%lf",&basic_salary);
dearnessallowance = basic_salary*.40;
house_rent = basic_salary*.20;
gross_salary = basic_salary-(dearnessallowance+house_rent);
printf("Niloys Gross salary: %.2lf\n",gross_salary);

    return 0;
}