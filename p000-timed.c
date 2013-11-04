#include <stdio.h>
int main() {
	clock_t begin,end;
	double time_spent;
	begin=clock();

	// STUFF

	end=clock();
	time_spent=(double)(end-begin)/CLOCKS_PER_SEC;
}
