#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int i,j,k,p=320,q=0,r,carry=0;
	long long int n=0;
	char *c=(char*)malloc(sizeof(char)*p);
	memset((void *)c,0,p);
	*c=1;
	for(i=0;i<p-1;i=*(c+i+1)>0?i+1:i){
		carry=0;
		for(j=0;j<i+2;j++){
			r=*(c+j)*2+carry;
			*(c+j)=r%10;
			carry=r/10;
			if(j==i+1){++q;}
			//if(j==i+1){printf("n: %d\t",++q);}for(k=p-1;k>-1;k--){printf("%d",*(c+k));}printf("\n");}
		}
		if(q==1000){break;}
	}
	for(k=p-1;k>-1;k--){n+=*(c+k);}
	printf("n: %lld\n",n);
}
