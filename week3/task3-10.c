#include <stdio.h>
int x=5;
void main(){
	int z =5;
	printf(" z = %d\n",z);
	{
		printf(" z = %d\n",z);
		z=6;
		printf(" z = %d\n",z);
		int z =12;
		printf(" z = %d\n",z);
		z=7;
		printf(" z = %d\n",z);
	}
	printf(" z = %d\n",z);
}