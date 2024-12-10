#include <stdio.h>
void prime_number(int x);
int main(){
	printf("enter the number:");
	int num;
	scanf("%d",&num);
	 prime_number(num);
}
void prime_number(int x){
	if(x==0 || x==1){
		printf("%d is not prime");
		
	}
	int check=0;
	for(int i =2;i<x;i++){
		if(x%i==0){
			printf(" %d  is not prime\n",x);
			check=1;
			break;
		}
		
			
		
		
		
	}
	if(check !=1){
		printf("%d is prime\n",x);
	}
	
				
	
}