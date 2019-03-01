#include <stdio.h>

void main() {

	char kullanici_adi[20];
	char sifre[10];

	printf("kullanici adini girin");
	scanf("%s", kullanici_adi);
    printf("sifreyi girin");
	scanf("%s", sifre);  

	if(strcmp(kullanici_adi, "hamza") == 0 && strcmp(sifre, "100") == 0){
		printf("giris basarili");	
	}
    else {
   		printf("kullanici adi veya parola hatali");
	}
	

	
	
	
	
}
