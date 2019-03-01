#include <stdio.h>


void main() {
	
	int sayi;
	
	printf("bir sayi girin");
	scanf("%d", &sayi);
	
	if((sayi % 4) == 0 ||(sayi % 5) == 0 ||(sayi % 6) == 0){
		printf("sayi uygun");
	}
	else{
		printf("sayi uygun degil");
	}
	

}
