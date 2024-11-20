#include<stdio.h>
int main(){
	float diemtoan,diemvan,diemanh;
	
	printf("nhap diem toan là ?");
    scanf("%f", &diemtoan);
    
	printf("nhap diem van là ? ");
	scanf("%f", &diemvan);
	
	printf("nhap diem anh là ?");
    scanf("%f", &diemanh);
    
	float diemtong,diemtrungbinh;
	diemtong = diemtoan + diemvan + diemanh;
	
	diemtrungbinh = diemtong/3;
	printf("tong diem là :%.2f\n",diemtong);
	printf("diem trung bình là :%.2f\n",diemtrungbinh);
	return 0;
	} 
