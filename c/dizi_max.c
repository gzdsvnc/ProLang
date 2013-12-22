#include <stdio.h>
int max(int , int*);
int main()
{
	int a[10]={10,-4,9,99,23,66,7,-345,56,0};
	int m;
	m=max(10,a);
	printf("en büyük sayi=%d\n", m);
	return 0;
}
int max(int n, int *p) 
{
	int maxdeger;
	int k;
	maxdeger=p[0];
	for (k=1; k<n; k++) 
		if (maxdeger<p[k])
			maxdeger=p[k];
	
	return maxdeger;
}
