#include <stdio.h>


void main() {

	int urun1;
	int urun2;
	
	printf("birinci urunu girin");
	scanf("%d", &urun1);
	
	printf("ikinci urunu girin");    
	scanf("%d", &urun2);

    int toplam =(urun1+urun2);
    int yirmibes =(urun2/4);

	if((toplam) > 200){
		printf("indirimli odenecek tutar = %d", (urun1+urun2-yirmibes));	
	}
	else{
   		printf("odenecek tutar = %d", (urun1+urun2));
    }



}
