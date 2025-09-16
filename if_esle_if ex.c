#include<stdio.h>

int main(){
	
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	
	if(age<5){
		
		printf("Ticket free-Enjoy");
		
	}
	esle if(age>5 && age<10){
	printf("Half Ticket");	
		
	}
	else if(age>12 && age<60){  
	
	
	printf("full Ticket");
	}
	esle if(age>60 && age<77){
		
		printf("Cenior citizes-free");
	}
	
	
	return 0;
}

