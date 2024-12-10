#include <stdio.h>

 unsigned long long int fibonacci(unsigned int x);
int main(){
	unsigned int number;
	printf("enter the number:");
	scanf("%u",&number);
	unsigned long long int result = fibonacci(number);
	printf("the nth fibonacci is %u\n",result);
	while(1){
		
		unsigned long long int check =fibonacci(number);
		 if(check> 18446744073709551614ULL)
			 break;
		 number++;
	}
	printf("the largest fibonacci number %u",fibonacci(number-1));
	
}
  unsigned long long int fibonacci(unsigned int x){
	if(x==0)
		return 0;
	if(x==1)
		return 1;
	 unsigned long long int num1=0,num2=1,sum;
	 for(int i=2;i<=x;i++){
		 sum=num1 + num2;
		 num1=num2;
		 num2=sum;
	 }
	 return num2;
}