#include <stdio.h>
int main(){
	int v,a,b,c;
	for(int i=0; i<3;i++){
		scanf("%d%d%d%d",&v,&a,&b,&c);
		printf("inputs\n");
		printf("%d %d %d %d\n",v,a,b,c);
		printf("outputs\n");
		while(1){
			v-=a;
			if(v < 0){
				printf("F\n");
				break;
			}
			v-=b;
			if(v <0){
				printf("M\n");
				break;
			}
			v-=c;
			if(v<0){
				printf("T\n");
				break;
			}
		}
		
	}
}