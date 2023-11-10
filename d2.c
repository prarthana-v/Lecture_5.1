#include<stdio.h>
main(){
	int a;
	
	printf("Enter any value:");
	scanf("%d",&a);
	
	if(a>0) printf("value is Positive..");
	else if(a<0) printf("value is Negative..");
	else printf("value is Neutral..");
}
