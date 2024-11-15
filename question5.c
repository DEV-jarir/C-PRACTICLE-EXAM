#include<stdio.h>
main(){
	int num,total,sum;
	total=0;
	printf("print any number:");
	scanf("%d",&num);
	sum=num;
	while(sum !=0){
		sum /=10;
		total++;
	}
	printf("Total number of value:%d",total);
}
