#include <stdio.h>


void main() {
	
	int sayi;
	
	printf("bir sayi girin");
	scanf("%d", &sayi);
	
	if((sayi % 2) == 0 &&(sayi % 3) ==0){
		printf("2 ve 3`un kati");
	}
	else if((sayi % 2) == 0){
		printf("2 nin kati");
	}
	else if((sayi % 3) == 0){
		printf("3 nin kati");
	}
	else {
		printf("2 nin veya 3 un kati degil");
	}
	

}
