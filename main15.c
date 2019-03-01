#include <stdio.h>

void main() {
	
	int sayi;
	
	printf("bir sayi girin");
	scanf("%d", &sayi);
	
	if((sayi % 2) == 0 && (sayi) < 100 && (sayi) > 0){
		printf("sayi uygun");
	}

	else {
		printf("sayi uygun degil");
	}
	

}
