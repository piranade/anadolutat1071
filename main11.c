#include <stdio.h>


void main() {

	int sayi;

	printf("bir sayi girin");
	scanf("%d", &sayi);
	
	if((sayi % 2) == 0 &&(sayi % 3) ==0){
		printf("ok");
	}
	else{
		printf("hata");
	}
	
	
}
