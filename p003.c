#include <stdio.h>
#define N 600851475143
char isprime(long int n){
	long int i;
	for(i=2;i*i<n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main() {
	long int i,max;
	for(i=2;i*i<N;i++){
		if(N%i==0&&isprime(i)){
			max=i;
		}
	}
	printf("%ld\n",max);
	return 0;
}
