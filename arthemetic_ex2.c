#include<stdio.h>
 
int main(){
 	int appleQty,oilQty,milkQty;
 	int applePrice, oilPrice,milkPrice;
 	int total;
 	int paid;
 	applePrice =50;
	oilPrice = 60;
	milkPrice =40;
	printf(" Enter quantity of apple (kg)");
	scanf("%d",&appleQty);
	printf(" Enter quantity of oil (leter)");
	scanf("%d",&oilQty);
	printf(" Enter quality of milk (leter)");
	scanf("%d,",&milkQty);
	
	total=(appleQty * applePrice) + (oilQty * oilPrice) + (milkQty * milkPrice);
	printf(" Total bill amount:%d\n",total);
	
	printf(" Enter amount paid by customer ? ");
	scanf("%d",&paid);
	
	printf("change to return =%d\n ",paid-total);
	
	
	
	return 0;
	
	 
 	
 
 }
