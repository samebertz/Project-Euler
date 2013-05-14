#include <stdio.h>
int main() {
	int i;
	long s=0,t=0;
	for(i=1;i<101;i++){
		s+=i;
		t+=i*i;
	}
	s*=s;
	printf("%ld\n",s-t);
	return 0;
}
