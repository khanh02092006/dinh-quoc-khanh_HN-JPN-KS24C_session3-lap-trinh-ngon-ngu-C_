#include<stdio.h>
int main(){
	float diemtoan,diemvan,diemanh;
	
	printf("nhap diem toan l� ?");
    scanf("%f", &diemtoan);
    
	printf("nhap diem van l� ? ");
	scanf("%f", &diemvan);
	
	printf("nhap diem anh l� ?");
    scanf("%f", &diemanh);
    
	float diemtong,diemtrungbinh;
	diemtong = diemtoan + diemvan + diemanh;
	
	diemtrungbinh = diemtong/3;
	printf("tong diem l� :%.2f\n",diemtong);
	printf("diem trung b�nh l� :%.2f\n",diemtrungbinh);
	return 0;
	} 
