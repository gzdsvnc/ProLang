#include <stdio.h>
#include <string.h>
int main() {
	int uzunluk=0,sira=0,a;
	char dizgi1[10] , dizgi2[19];
	char yeni[100];
	puts("dizgi1 giriniz:");
	gets(dizgi1);
	puts("dizgi2 giriniz:");
	gets(dizgi2);
	int boy = strlen(dizgi1);
	while(dizgi1[sira]!='\0'){
		uzunluk++;
		
		for(sira=0; sira<uzunluk; sira++){
			yeni[sira]=dizgi1[sira];
		}
	}
	yeni[boy]=' ';
	for(a = 0; a < strlen(dizgi2); a++ ) {
		yeni[boy+1]=dizgi2[a];
		boy++;
		
	}		
	
	printf("yeni dizgiyi yaz:");
	printf("%s",yeni);
	
	return 0;
}
		
		
