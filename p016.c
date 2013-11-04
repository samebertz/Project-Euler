#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int i,j,k,p,q,r,carry=0;
	long long int n;
	char *c=(char*)malloc(sizeof(char)*11);
	memset((void *)c,0,11);
	*c=1;
	for(i=0;i<10;i=*(c+i+1)>0?i+1:i){
		carry=0;
		for(j=0;j<i+2;j++){
			r=*(c+j)*2+carry;
			*(c+j)=r%10;
			carry=r/10;
			if(j==i+1){printf("c: ");for(k=10;k>-1;k--){printf("%d",*(c+k));}printf("\n");}
		}
		if(i==6){break;} // Need to adjust stop point.
	}
}
