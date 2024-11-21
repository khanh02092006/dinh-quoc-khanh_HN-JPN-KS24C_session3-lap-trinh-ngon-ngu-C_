#include <stdio.h>
int main(){
	float cd,cc,dt;
	printf("nhap do dai canh day");
	scanf("%f",&cd);
	printf("nhap chieu cao cua tam giac ");
	scanf("%f",&cc);
	dt = (cd*cc)/2;
	
	
	printf(" dien tich cua tam giac là :%.2f",dt);
	return 0;
	}
