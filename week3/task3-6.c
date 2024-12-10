#include <stdio.h>
unsigned int foo(unsigned int n,unsigned int r);
int main(){
	int result= foo(513,2);
	printf("the return value = %d\n",result);
}
unsigned int foo(unsigned int n,unsigned int r){
	if(n>0)
		return (n%r)+foo(n/r,r);
	else
		return 0;
}