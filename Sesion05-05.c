#include<stdio.h>
int main(){
	int nhan;
	for(int i = 1; i <= 10; ++i){
		printf("---------------BANG CUU CHUONG %d --------------- \n",i);
		for(int n = 1; n <= 10; ++n){
			nhan = i * n ;
			printf(" %d * %d = %d \n ",i,n,nhan);
		}
	}
	return 0;
}
