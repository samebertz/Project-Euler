#include <stdio.h>
#include <stdlib.h>
char ispalindrome(int n){
	int i=0,j;
	char *c=(char*)malloc(sizeof(char)*7);
	snprintf(c,7,"%d",n);
	while(*c!='\0'){
		c++;
		i++;
	}
	c-=i;
	j=i/2;
	for(;i>j;i--,c++){
		if(*c!=*(c+i)){
			return 0;
		}
	}
	return 1;
}
int main() {
	int i,j,max;
	for(i=100;i<1000;i++){
		for(j=i;j<1000;j++){
			if(ispalindrome(i*j)){
				max=i*j;
			}
		}
	}
	printf("%d\n",max);
	return 0;
}
