#include <stdio.h>
#include <stdlib.h>
int fun(int *n1,int *n2){
int sum= *n1 + *n2;
int difference = *n1 - *n2;
int product = *n1 * *n2;
printf("sum = %d , difference= %d , product= %d \n",sum,difference,product);

}



int main()
{
    int a,b;
    printf("enter the number 1 : 5 ");

    scanf("%d",&a);
    printf("enter the number 2 : 9 ");
    scanf("%d",&b);
    fun(&a,&b);



    return 0;
}
