#include<stdio.h>

int main(){
	
	int x,y;
	
	 printf(" Enter x value: ");
	 scanf("%d",&x);
	 printf(" ter y value: ");
	 scanf("%d",&y);
	 
	 printf(" Logical operation Result :-");
	 printf(" AND result : %d\n", (x>5 && y<10)); //&&
	 printf(" OR result : %d\n", (x>5 || y<10));  //||
	 printf(" NOT result :%d\n", !(x>y));         // !	 
	 
	 
	 return 0; 
}
