#include <stdio.h>

int main(){
	int n;
	int num = 1;
	printf("enter the lines :");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		if(num % 4 ==0){
			num++;
		}
		printf("%d ",num++);
		printf("%d ",num++);
		printf("%d ",num++);
		printf("PUM\n");
		
		
	}
}