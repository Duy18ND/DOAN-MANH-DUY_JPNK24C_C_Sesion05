#include<stdio.h>
int main(){
	int n = 28;
	int i;
	 printf("--------------Chao Mung Ban Den Voi Tro Choi Doan So----------------- \n");
	 while(1){
	 	printf("Moi ban nhap vao 2 chu so bat ky la:   ");
		scanf("%d",&i); 
	 	if(i == n){
	 		printf("CHUC MUNG BAN DA DOAN DUNG SO %d",n);
			break; 
		 }else{
		 	printf("So Ban Nhap Da Sai, Vui Long Thu Lai So Khac \n"); 
		 } 
	 } 
	return 0; 
} 
