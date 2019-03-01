#include <stdio.h>

 
void main() {

	int final;
	int vize;
	
	printf("vize notunu girin");
	scanf("%d", &vize);
	
	printf("final notunu girin");
	scanf("%d", &final);
	
	int yuzde =(final*3/5);
	int yuzde2 =(vize*2/5);
	int ortalama =(yuzde+yuzde2);
		
	if((ortalama) > 50){
		printf("basarili = %d", (ortalama));	
	}
	else{
   		printf("basarisis daha cok calis = %d");
    }
}
