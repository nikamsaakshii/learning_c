#include<stdio.h>



int main(){
	
	int temprature;
	printf("Enter Temprature");
	scanf("%d",&temprature);
	if(temprature<50){
		
		printf("temprature is cold");
	}
	else if(temprature>50 && temprature<60){
		
		printf("temprature is hot");
	}
	else if(temprature>60 && temprature<70){
		
		printf("temprature  is very hot ");
		
	}
	if(temprature>70 && temprature<80){
		
		printf("temprature is high");
	}
	
	
	
return 0;	
}





