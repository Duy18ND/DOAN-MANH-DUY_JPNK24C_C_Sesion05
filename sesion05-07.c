#include<stdio.h>
int main(){
	int a,b;
	printf("Nhap so nguyen duong a = ");
	scanf("%d",&a);
	printf("Nhap so nguyen duong b = ");
	scanf("%d",&b);
	if(a < 0 || b< 0){
		printf("So a va b Cua Ban Khong Phai La So Nguyen Duong");
		return 1;
	}
	int min = a > b ? a : b;
	for(int i = min; i >= 1; ++i){
		if((i % a == 0) && (i % b ==0)){
			printf("%d ",i);
			break;
		}
	}
	return 0;	 
}
