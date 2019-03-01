#include <stdio.h>

void main() {

	int sayi1,sayi2,sayi3;
	
	printf("bir sayi girin");
	scanf("%d", &sayi1);
	
	printf("bir sayi girin");
	scanf("%d", &sayi2);
	
	printf("bir sayi girin");
	scanf("%d", &sayi3);
	
		
	if((sayi1) > 50 ||(sayi2) > 50 ||(sayi3) > 50){
		printf("yeterli");
	}
	else{
		printf("yetersiz");
	}
}
