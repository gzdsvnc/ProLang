#include <stdio.h>
#include <ctype.h>

int main() {
	int c;
	c=getchar();
	if(isdigit(c)) {
		c+=13;
	}
	putchar(c);
	else if(isalpha(c)) {
		c+=2;
	}
	putchar(c);
return 0;
}
