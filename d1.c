#include<stdio.h>
main(){
	int a,b;
	printf("Enter first number:");
	scanf("%d",&a);
	
	printf("Enter second number:");
	scanf("%d",&b);
	
	if(a<b){
		printf("a is maxmium..\n");
	}
	else{
		printf("b is minimum..");
	}
}
