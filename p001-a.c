#include <stdio.h>
int main() {
	int i, sum=0;
	for(i=0;i<334;i++){
		sum+=i*3;
	}
	for(i=0;i<200;i++){
		sum+=i*5;
	}
	for(i=0;i<67;i++){
		sum-=i*15;
	}
	printf("%d\n",sum);
	return 0;
}
