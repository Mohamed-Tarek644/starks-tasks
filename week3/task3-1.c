#include <stdio.h>
int reverse_number(int x);
int new_num =0;
int main(){
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	printf("number after reversing is %d \n",reverse_number(num));

	}
int reverse_number(int x){
	while(x!=0){
		int a = x%10;
	 new_num = (new_num *10) + a;
	x/=10;

	}
	return new_num;
}