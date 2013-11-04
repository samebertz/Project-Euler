#include <stdio.h>
int main() {
	int i,m;
	long j,t,p=0;
	for(i=1;i<1000000;i++){
		t=1;
		for(j=i;j>1;j=j%2==0?j/2:3*j+1){t++;}
		if(p<t){p=t;m=i;}
	}
	printf("%d\n",m);
	return 0;
}
