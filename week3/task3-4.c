#include <stdio.h>

int perfect_number(int x);
int main(){
	int j;
	printf("enter the number:");
	int num;
	scanf("%d",&num);
	if( perfect_number(num))
		printf("%d is perfect number\n",num);
	else
		printf("%d is not perfect number\n",num);
	
	printf("perfect numbers are\n");
	for(j=1;j <=100;j++){
		if( perfect_number(j)){
			printf("%d is perfect number\n",j);
		}
	}
}
int perfect_number(int x){
	int sum =0;
	for(int i=1;i<=x/2;i++){
		if(x % i==0){
			sum+=i;
		}
	}
	return sum ==x;
}