#include <stdio.h>


void main()
 {
	
   char islem[10];
   float sayi1,sayi2;
   
   printf("birinci sayiyi girin ");
   scanf("%f", &sayi1);
   
   printf("ikinci sayiyi girin ");
   scanf("%f", &sayi2);
   
   printf("islemi girin(toplama(+),cikarma(-),carpma(*),bolme(/)) ");
   scanf("%s", islem);
   
   if(strcmp(islem, "+") == 0){
		printf("toplami = %f", (sayi1+sayi2));
   }
   else if(strcmp(islem, "-") == 0){
   		printf("farki = %f", (sayi1-sayi2));
   }
   else if(strcmp(islem, "*") == 0){
   		printf("carpimi = %f", (sayi1*sayi2));
   }
   else if(strcmp(islem, "/") == 0){
   		printf("bolumu = %f", (sayi1/sayi2));
   }
   else{
   	printf("gecerli bir islem girmediniz");
   }
   

 }
