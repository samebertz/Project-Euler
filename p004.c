#include <stdio.h>
#include <stdlib.h>
char ispalindrome(int n){
	int i=0,j,k;
	char *c=(char*)malloc(sizeof(char)*7);
	snprintf(c,7,"%d",n);
	while(*(c+i)!='\0'){
		i++;
	}
	j=i/2;
	for(k=0,i--;i>=j;i--,k++){
		if(*(c+k)!=*(c+i)){
			return 0;
		}
	}
	return 1;
}
int main() {
	int i,j,t,max;
	for(i=100;i<1000;i++){
		for(j=i;j<1000;j++){
			t=i*j;
			if(t>max&&ispalindrome(t)){
				max=t;
			}
		}
	}
	printf("%d\n",max);
	return 0;
}
