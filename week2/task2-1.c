#include <stdio.h>

int main(){

		int origin_id , origin_password;
	printf("enter your ID :");
	scanf("%d",&origin_id);
	printf("enter your PASSWORD :");
	scanf("%d",&origin_password);
	printf("--------------------------\n");
	printf("welome to the program\n");
	int id,password,check;
	printf("please enter your ID :");
	scanf("%d",&id);
	if (id == origin_id){
		for(int i=0;i<=2;i++){


			printf("please enter your PASSWORD :");
			scanf("%d",&password);
			if(password == origin_password){
				printf("     welcome    \n");
				check =1;
				break;

			}
		}
		if (check != 1){
            printf(" NO MORE TIMES");
		}









		}
		else{


			printf("you are not registered\n");
		}







	}












