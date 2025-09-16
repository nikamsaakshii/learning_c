#include<stdio.h>
int main(){
	int x,y,z;
	printf("Enter  X value: ");
	scanf("%d",&x);
	printf("Enter Y value: ");
	scanf("%d",&y);
	printf("Enter Z value: ");
	scanf("%d",&z);
	
	 printf("logical Operation Result:-");
	 printf("AND result : %d \n",(x>5 && y<10 && z>20)); //AND
	 printf("OR result : %d \n",(x>5 || y<10 || Z>20)); //OR
	 printf("Not result : %d \n",!(x > y >z)); //NOT
	
	
	
	
	
	
	
	
	
	return 0;
}
