#include <stdio.h>

int main(){
	int m,n,swap,sum;
	for(int i=0;i<3;i++){
		scanf("%d%d",&m,&n);
		if((m<=0) || (n<=0)){
			continue;
		}
		if(m > n){
			swap =m;
			m=n;
			n= swap;
		}
		printf("inputs\n");
		printf("%d %d\n",m,n);
		printf("outputs\n");
		for(int j= m;j<=n;j++){
			printf("%d ",j);
			sum +=j;
		}
		printf("sum = %d\n",sum);
	}
	
	
}