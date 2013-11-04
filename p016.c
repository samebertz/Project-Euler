#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
/*	int i;
	long n;
	char *c=(char*)malloc(sizeof(char)*10);
	snprintf(c,5,"%d",1234);
	for(i=0;i<10;i++){
		printf("%d\n",(*(c+i)-'0')*2);
	}
	char *t=(c+1);
	*(c+1)='8';
	printf("%d\n%d\n",*t-'0',*(t+1)-'0');
	printf("%d\n",'0');
}*/

/*	int i,j,p,q,r;
	long long int n;
	int *x=(int*)malloc(sizeof(int)*10);
	memset((void *)x,0,10);
	*x=1;
	printf("%d\n",*x);
	for(i=0;i<10;i=*(x+i+1)>0?i+1:i){
		for(j=0;j<i+1;j++){
			//printf("i:%d ",i);//
			//printf("j:%d ",j);//
			p=*(x+j);//printf("p:%d ",p);//
			q=*(x+j+1);//printf("q:%d ",q);//
			r=p*2;//printf("r:%d ",r);//
			*(x+j)=(char)(r%10);
			*(x+j+1)=(char)(r/10+q);
			//printf("\tx+j: %d ",*(ic+j));//
			//printf("x+j+1: %d ",*(c+j+1));//
			printf("%s\n",x);//
		}
		if(i==1){break;}
	}
}*/
	int i,//loop counter for each digit in number
	j,//loop counter and index offset in number
	k,//loop counter
	p,//?
	q,//?
	r,//temporary storage for non-destructive digit manipulation
	carry=0;//carry for exponentiation
	long long int n;//answer
	char *c=(char*)malloc(sizeof(char)*11);//number
	memset((void *)c,0,11);
	*c=1;
	printf("%d\n",*c);//
	for(i=0;i<10;i=*(c+i+1)>0?i+1:i){
		carry=0;
		for(j=0;j<i+2;j++){
			r=*(c+j)*2+carry;		//printf("r:%d ",r);//
			*(c+j)=r%10;				//printf("\tc+j: %d ",*(c+j));//
			carry=r/10;					//printf("carry: %d ",carry);//
													if(j==i+1){printf("c: ");for(k=10;k>-1;k--){printf("%d",*(c+k));}printf("\n");}//else{printf("\n");}//
		}
		if(i==6){break;}
	}
}
/*	int i,j,p,q,r;
	long long int n;
	char *c=(char*)malloc(sizeof(char)*10);
	memset((void *)c,'0',10);
	//snprintf(c,2,"%d",2);
	*c=1+'0';
	printf("%d\n",*c-'0');
	for(i=0;i<10;i=*(c+i+1)-'0'>0?i+1:i){
		for(j=0;j<i+1;j++){
			printf("i:%d ",i);
			printf("j:%d ",j);
			p=*(c+j)-'0';printf("p:%d ",p);
			q=*(c+j+1)-'0';printf("q:%d ",q);
			r=p*2;printf("r:%d ",r);
			*(c+j)=(char)(r%10)+'0';
			*(c+j+1)=(char)(r/10+q)+'0';
			printf("\tc+j: %d ",*(c+j)-'0');
			printf("c+j+1: %d ",*(c+j+1)-'0');
			printf("%s\n",c);
		}
		if(i==1){break;}
	}
}*/
/*
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
}*/
