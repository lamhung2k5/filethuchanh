#include <stdio.h>
#include <conio.h>

long tinhgiaithua(int n);

int main(){
	int n; long ketqua;
	do{
		printf("\nNhap n la mot so nguyen duong: ");
		scanf("%d", &n);
	}while((n <= 0));
	ketqua = tinhgiaithua(n);
	printf("%d! = %d",n,ketqua);
	getch();	
}

long tinhgiaithua(int n){
	long tich = 1;
	for(int i = 1; i <= n; i++){
		tich = tich * i;
	}
	return tich;
}
