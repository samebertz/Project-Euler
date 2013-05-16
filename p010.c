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
	int i;
	long s=2;
	for(i=3;i<2000000;i+=2){
		if(isprime(i)){
			s+=i;
		}
	}
	printf("%ld\n",s);
	return 0;
}
