#include <stdio.h>
int binary_number(int x);
int main(){
	printf("enter the number:");
	int num;
	scanf("%d",&num);
	binary_number(num);
	
}
int binary_number(int x){
	if(x==0){
		printf("0");
		return 0 ;
	}
	if(x>1){
		binary_number(x/2);
	}
	printf("%d",x%2);
}