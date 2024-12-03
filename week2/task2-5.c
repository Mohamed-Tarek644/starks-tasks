#include <stdio.h>
int main(){
	int n,a,b,swap;
	for(int i= 0;i<3;i++){
		int result =0;
		scanf("%d%d%d",&n,&a,&b);
		if(a>b){
			swap = a;
			a=b;
			b=swap;
		}
		printf("inputs\n");
		printf("%d %d %d\n",n,a,b);
		printf("outputs\n");
		for(int j=1;j<=n;j++){
			
			int sum =0;
			int check=j;
			while(check>0){
				sum +=check % 10;
				check /= 10;
			}
			if( sum >=a && sum <=b){
				result+=j;
			}
			
		}
		printf("%d\n",result);
	}
}