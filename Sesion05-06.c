#include<stdio.h>
int main(){
	int i,a,b,tong,hieu,tich,thuong;
	printf("------------CALCULATOR------------ \n");
	printf("1. Tinh Tong \n");
	printf("2. Tinh Hieu \n");
	printf("3. Tinh Tich \n");
	printf("4. Tinh Thuong \n");
	printf("5. Thoat....  \n");
	
	
	while (1){
		printf("Ban Muon Su Dung Phep Tinh Gi?: ");
		scanf("%d",&i);
		
	if(i == 5){
	printf("Cam On Ban Da Su Dung Ung Dung CALCULATOR ^^ ");
	return 1;
    }
		printf(" Ban Can Nhap So a Can Tinh La: ");
		scanf("%d",&a);
		printf(" Ban Can Nhap So b Can Tinh La: ");
		scanf("%d",&b);
	
	if(i == 1){
	printf("Ban Da Chon Cach Tinh Tong: \n");
	tong = a + b;
	printf("%d + %d = %d \n ",a,b,tong);
    }
    if(i == 2){
	printf("Ban Da Chon Cach Tinh Hieu: \n");
	hieu = a - b;
	printf("%d - %d = %d \n ",a,b,hieu);
    }
    if(i == 3){
	printf("Ban Da Chon Cach Tinh Tich: \n");
	tich = a * b;
	printf("%d * %d = %d \n ",a,b,tich);
    }
    if(i == 4){
	printf("Ban Da Chon Cach Tinh Thuong: \n");
	thuong = a / b;
	printf("%d / %d = %d \n ",a,b,thuong);
    } 
	}
	
	
	return 0;
}
