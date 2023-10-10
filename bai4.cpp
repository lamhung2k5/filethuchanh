#include <stdio.h>
#include <conio.h>

int tinhdtHCN(int a, int b);

int main(){
	int a,b,dt;
	do{
		printf("\nNhap chieu dai: ");
		scanf("%d", &a);
		printf("\nNhap chieu rong: ");
		scanf("%d", &b);
	}while((a <= 0)||(b <= 0));
	dt = tinhdtHCN(a,b);
	printf("\ndien tich hinh chu nhat la %d",dt);
}

int tinhdtHCN(int a, int b){
	return a*b;
}
