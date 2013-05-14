#include <stdio.h>
int main() {
	int i,j,k,sum=0;
	for(i=1,j=1;i<4000000;k=i,i+=j,j=k){
		if(i<<31>>31==0){
			sum+=i;
		}
	}
	printf("%d\n",sum);
	return 0;
}
