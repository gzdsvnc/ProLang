#include <stdio.h>
#include <string.h>

int main(){

	char a[100];
	int i;
	gets(a);
	char b[100];
	int say = 0;
	for(i = 0; i< strlen(a); i++) {
	if(a[i]!=' ') 
		 b[say++] = a[i];
	
	
	else if (a[i] == '\n')
		break;
	else
		if (a[i + 1]!=' ')
			b[say++] = a[i];
	}
	
printf("%s",b);
return 0;
}
