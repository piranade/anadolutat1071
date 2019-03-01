#include <stdio.h>


void main() {

	float sayi;
	
	printf("sayiyi girin");
	scanf("%f", &sayi);
	
	
	if((sayi) > 0){
		printf("sayi pozitif");	
	}
	else if((sayi) < 0){
   		printf("sayi negatif");
    }
	else if((sayi) == 0){
   		printf("sayi sifir");
    }

}
