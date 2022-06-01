#include<stdio.h>
int main(){
double km,meter,feet,inches,centimeters;
printf("Enter distance between Mirpur and Ashulia: ");
scanf("%lf",&km);
    meter=km*1000; //1km=1000meters
	feet=km*3280.8399; //1km=3280.8399 feets
	inches=km*39370.078; //1km=39370.078 inches
	centimeters=km*100000; //1km=100000 centimeter
    printf("Distance in meter from Mirpur to Ashulia:%.2lf\n",meter);
	printf("Distance in feet from Mirpur to Ashulia:%.2lf\n",feet);
	printf("Distance in inches from Mirpur to Ashulia:%.2lf\n",inches);
	printf("Distance in centimeter from Mirpur to Ashulia:%.2lf\n",centimeters);
	

    return 0;
}