#include <stdio.h>
float small_number(float x,float y,float z);
int main(){
	printf("enter the first float number:");
	float num1;
	scanf("%f",&num1);
	printf("enter the second float number:");
	float num2;
	scanf("%f",&num2);
	printf("enter the third float number:");
	float num3;
	scanf("%f",&num3);
	float res = small_number(num1,num2,num3);
	printf("the small float number is %f\n",res);
}
float small_number(float x,float y,float z){
	if(x<=y && x<=z)
		return x;
	else if(y<=x && y<=z)
		return y;
	else
		return z;
}