#include <stdio.h>
char isprime(int n){
	int i;
	for(i=2;i*i<=n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main() {
	int i=1,p=3;
	while(1){
		if(isprime(p)){
			i++;
		}
		if(i==10001){
			break;
		}
		p+=2;
	}
	printf("%d\n",p);
	return 0;
}
