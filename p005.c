#include <stdio.h>
int main() {
	long i=1,j;
	char t;
	while(1){
		t=1;
		for(j=1;j<21;j++){
			if(i%j!=0){
				t=0;
				break;
			}
		}
		if(t){
			break;
		}
		i++;
	}
	printf("%ld\n",i);
	return 0;
}
