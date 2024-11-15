#include<stdio.h>
main(){
	int a,b;
	printf("enter a value:");
	scanf("%d",&a);
	printf("enter b value:");
	scanf("%d",&b);
	if(a<b){
		printf("%d is minimum",a);
	}
	else if(b<a){
		printf("%d is minimum",b);
	}
	else{
		printf("both value is same");
	}	
}
