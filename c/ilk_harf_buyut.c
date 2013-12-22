#include<stdio.h>
#include<ctype.h>

int main()
{
	int i;
	int c=1;
	char a[200];
	puts("Bir cumle giriniz\n");
	gets(a);

	for(i=0 ; a[i]!= EOF ; i++) {
	 
		if(c==1 && a[i] != " ") { 
			a[i]=toupper(a[i]);
			c=0;
		}
		else if(a[i] == " ") {
			c=1;
		}
	}
		printf("Cumlenin son hali:\n");
		printf("%s",a);
return 0;
}
