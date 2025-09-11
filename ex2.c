#include<stdio.h>
int main(){


     int appleQty,oilQty,milkQty;
	 
	 int appleprice,oilprice, milkprice;
	  int total;
	  int paid;
	 
	 int apple price= 100;
	 int oil price= 40;
	 int milk price= 20;
	 
	  
	
	  printf("Enter apple Qty(kg)");
	  scanf("%d",&appleQty);
	  printf("enter oli Qty(ltr)");
	  scanf("%d",&oilQty);
	  printf ("Enter milk Qty(ltr)");
	  scanf("%d",&milkQty);
	  
	  total=(appleQty * appleprice)+(oilQty * oilprice)+(milkQty * milkprice);
	  printf("total bill amount:%d \n",total;)
	  
	  printf("Enter amount paid by Customer?");
	  scanf("%d",paid);
	  
	  printf("change to return = %d \n",paid-total);
	  
	  
	 
	 
	 return 0; 
}
