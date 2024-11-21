#include<stdio.h>
int main (){
	int songuyen,sodaonguoc=0;
	printf("nhap so nguyen co 4 chu so là ");
	scanf("%d",&songuyen);
	
	
	if (songuyen<1000 || songuyen>9999){
		printf("so nguyen này bi loi rui");
		return 1;
		}
		while(songuyen>0){
			sodaonguoc=sodaonguoc *10+ (songuyen %10);
			songuyen /=10;
			}
			printf("so dao nguoc là :%d\n",sodaonguoc);
			return 0;
			}
