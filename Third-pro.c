#include<stdio.h>
main(){
	
	float c, f;
	
	printf("Enter Temperature in Celcius : ");
	scanf("%f", &c);
	
	f = (c*9/5) + 32;
	
	printf("\nCelsius Converted to Fahrenheit is : %.1f", f);	
	
}