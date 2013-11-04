#include <stdio.h>
int main() {
	int i,j;
	long double n=1;
	for(i=1;i<21;i++){
		n*=(long double)(i+20)/(long double)i;
	}
	printf("%Lf\n",n);
	return 0;
}
