#include <stdio.h> 
void swap(int *ilk, int *ikinci) {
	int gecici;
	gecici= *ilk;
	*ilk= *ikinci;
	*ikinci= gecici;
}
int main() {
	int a=3;
	int b=5;
	
	printf("önceki deger a=%d b=%d\n", a,b);
	swap(&a,&b);
	printf("sonraki deger a=%d b=%d\n", a,b);
	return 0;
}
