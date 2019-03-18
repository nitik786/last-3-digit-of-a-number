#include<stdio.h>
int main(){
	int a;
	int r;
	printf("Enter your 5 digit number");
	scanf("%d",&a);
	r=(a%1000);
	printf("The last three digit is %d",r);
return 0;	
}


