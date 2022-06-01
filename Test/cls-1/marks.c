#include<stdio.h>
int main(){
double sub1,sub2,sub3,sub4,sub5,aggregate_marks,percentage_marks ;
printf("Enter subject-1 number: ");
scanf("%lf",&sub1);
printf("Enter subject-2 number: ");
scanf("%lf",&sub2);
printf("Enter subject-3 number: ");
scanf("%lf",&sub3);
printf("Enter subject-4 number: ");
scanf("%lf",&sub4);
printf("Enter subject-5 number: ");
scanf("%lf",&sub5);

aggregate_marks = sub1+sub2+sub3+sub4+sub5;
printf("Aggregate marks: %.2lf\n",aggregate_marks);

percentage_marks = aggregate_marks/5;
printf("Percentage Marks: %.2lf\n",percentage_marks); 

    return 0;
}