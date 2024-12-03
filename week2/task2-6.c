#include <stdio.h>

int main(){
	int a,b;
	for(int i=0;i<3;i++){
		int times =0;
		scanf("%d%d",&a,&b);
		printf("inputs\n");
		printf("%d %d\n",a,b);
		printf("output\n");
		while(1){
			a= a*3;
			b= b*2;
			++times;
			if(a > b)
				break;
			
		}
		printf("%d\n",times);
	}
	
	
}