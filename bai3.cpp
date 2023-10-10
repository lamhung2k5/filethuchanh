#include <stdio.h>
#include <conio.h>

int tinhtong(int a, int b);

int main(){
	int a,b,tong;
	printf("\nNhap a: ");
	scanf("%d", &a);
	printf("\nNhap b: ");
	scanf("%d", &b);
	tong = tinhtong(a,b);
	printf("%d + %d = %d",a,b,tong);
}

int tinhtong(int a, int b){
	return a+b;
}
