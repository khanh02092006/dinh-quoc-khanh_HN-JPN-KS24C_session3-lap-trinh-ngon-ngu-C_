#include <stdio.h>
int main(){
	float Celsius,Fahrenheit;
	printf("nhap nhiet do theo do Celsius :");
	scanf ("%f",&Celsius);
	Fahrenheit =(Celsius *9/5)+32;
	printf("nhiet do theo do Fahrenheit :%.2f\n",Fahrenheit);
	return 0;
	}
