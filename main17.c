#include <stdio.h>

void main() {

int sayi1,sayi2,sayi3;
	
	printf("bir sayi girin");
	scanf("%d", &sayi1);
	
	printf("bir sayi girin");
	scanf("%d", &sayi2);
	
	printf("bir sayi girin");
	scanf("%d", &sayi3);
	
		
	if((sayi1) > 0 &&(sayi2) > 0 &&(sayi3) > 0 &&(sayi1%2) == 0  &&(sayi2%2) == 0 &&(sayi3%2) == 0){
		printf("yeterli");
	}
	else{
		printf("yetersiz");
	}
}


