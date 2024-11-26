#include <stdio.h>

int main(){
	float num1,num2,swap;
	printf("enter the two numbers:");
	scanf("%f %f",&num1,&num2);
	printf("numbers before swapping\n");
	printf("the first number is %f\nthe second number is %f\n",num1,num2);
	
	swap = num1;
	num1 = num2;
	num2 = swap;
	printf("numbers after swapping\n");
	printf("the first number is %f\nthe second number is %f\n",num1,num2);
	
	
	
	
	
	
}