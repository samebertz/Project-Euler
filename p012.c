#include <stdio.h>
#include <math.h>
int main() {
	int i,j,k;
	long n;
	for(n=1,k=1;;n=n+(++k)){
		if(n<500){printf("%ld\n",n);}
		j=0;
		for(i=1;i<sqrt(n);i++){
			if(n%i==0){j+=2;}
		}
		if(j>500){break;}
	}
	printf("%ld\n",n);
	return 0;
}
