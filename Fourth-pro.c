#include<stdio.h>
main(){
	
	int base_salary, gross_salary, hra, da, ta;
	
	printf("Enter Base Salary : ");
	scanf("%d", &base_salary);
	
	printf("Enter HRA : ");
	scanf("%d", &hra);
	
	printf("Enter DA : ");
	scanf("%d", &da);
	
	printf("Enter TA : ");
	scanf("%d", &ta);
	
	gross_salary = base_salary + hra + da + ta;
	
	printf("Your Gross Salary Is : %d", gross_salary);
}