#include <stdio.h>


void main() {

	int urun1;
	
	printf("birinci urunu girin");
	scanf("%d", &urun1);


	if((urun1) > 100){
		printf("kargosus odenecek tutar = %d", (urun1));	
	}
	else{
   		printf("kargolu odenecek tutar = %d", (urun1+5));
    }




}
