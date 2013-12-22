#include <stdio.h>
int kelime_sayisi_bul(char *p) {
	int i=0;
	int kel_sayisi=0;
	while(p[i]!='\0') {
		if (p[i]== ' ')
		kel_sayisi++;
		i++;
	}
	return kel_sayisi+1;
}
int main() {
	char p[100];
	int kel_sayisi=0;
	puts("bir cumle giriniz:") ;
	gets(p);
	kel_sayisi=kelime_sayisi_bul(p);
	printf("girdiğiniz cümle %d kelimeden olusuyor.", kel_sayisi);
	return 0;
}
	
