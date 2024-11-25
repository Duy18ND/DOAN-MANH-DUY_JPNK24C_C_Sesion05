#include<stdio.h>
int main(){
	int n,nhan;
	printf("--------------BANG CUU CHUONG--------------- \n");
	printf("Ban muon xem bang cuu chuong may ( 1 - 10)   ");
	scanf("%d",&n);
	if(n>10 || n < 1){
		printf(" %d KHONG CO TRONG BANG CUU CHUONG \n",n);
		return 1;
	}
		printf("------------- BANG CUU CHUONG %d ------------- \n",n);
	for(int i = 1; i <= 10; ++i){
		nhan = n * i;
		printf("%d * %d = %d \n",n,i,nhan);
	}
	return 0;
}
