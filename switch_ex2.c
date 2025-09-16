#include<stdio.h>

int main(){
	
	char op;
	int a, b;
	
	printf("Enter 1st number ");
	scanf("%d",&a);
	printf("Enter 2nd number");
	scanf("%d",&b);
	printf("Enter Operator(+,-,*,/):");
	
	scanf(" %c",&op);
	
	switch(op){
		
		
		case '+':printf("sum=%d",a+b);
					break;
		case '-':printf("Diffrence =%d", a-b);
				break;
		case'*': printf("multiplication =%d",a*b);
				break;
		case'/':printf("Division =%d",a/b);
				break;
				
		default:printf("Invalid Charactor");
	}
	
	
	
	
	
	
	return 0;
}
