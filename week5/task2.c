#include <stdio.h>
#include <stdlib.h>

int fac(int *n1){
    if(*n1==0){
        return 1;
    }

    else{
        int z=*n1;
    (*n1)--;

        return z * fac(n1);
    }







}

int main()
{
    int a;
    printf("enter the number do you want its factorial:");
    scanf("%d",&a);
    int r=a;
    int result =fac(&a);
    printf("the factorial of %d = %d\n",r,result);

    return 0;
}
