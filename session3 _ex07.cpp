#include <stdio.h>
int main(){
	int songuyen,tong=0;
	printf("nhap so nguyen có 4 chu só là :  ");
	scanf("%d",&songuyen);
	if (songuyen <1000 || songuyen >9999){
		printf("so nay kh phai so nguyen 4 chu so\n ");
		return 1;
		}
		while (songuyen >0){
			tong += songuyen %10;
			songuyen /=10;
			}
			printf( "tong cac 4 chu so là :%d\n",tong);
			}
