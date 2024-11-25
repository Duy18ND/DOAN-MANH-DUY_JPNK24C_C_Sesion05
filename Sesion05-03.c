#include<stdio.h>
int main(){
	int sum = 0;
	int n;
	printf("Nhap So Nguyen Bat Ky : ");
	scanf("%d",&n);
	if(n <= 0 ){
		printf("So Ban Nhap Khong Phai La So Nguyen Duong");
		return 1; 
	}
	for(int i = 1; i <= n ; ++i ){
		sum += i;
		printf("So Lan Lap %d Tong la: %d \n",i,sum); 
	}
	return 0; 
}
