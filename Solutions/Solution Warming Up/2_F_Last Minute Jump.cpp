#include<stdio.h>

int main(){
	int angka = 0;
	scanf("%d", &angka);
	getchar();
	for(int i = 1; i<=angka; i++){
		if (i != angka){
			printf("%d - run\n", i);
		} else {
			printf("%d - jump\n", i);
		}
	}
}
