#include<stdio.h>
main(){
	int a,b,sum;
	a=30;
	b=50;
	printf("%d\t%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d\t%d",a,b);
}
