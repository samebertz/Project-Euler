#include <stdio.h>
int main() {
	int a,b,c;
	char e=0;
	for(a=1;a<=333;a++){
		for(b=1;b<=(1000-a)/2;b++){
			c=1000-(b+a);
			if((a*a+b*b)==c*c){
				e=1;
				break;
			}
		}
		if(e){
			break;
		}
	}
	printf("%d\n",a*b*c);
	return 0;
}
