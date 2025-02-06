#include <stdio.h>
#include <stdlib.h>

int main()
{
 printf("enter the number:");
 int x,y,z=0;
 scanf("%d",&x);
 int k=x;
 while(x!=0){
    y=x%10;
    z=z*10 + y;
    x/=10;

 }
 if(k==z)
    printf("%d is palindrome\n",k);
 else
    printf("%d is not palindrome\n",k);




    return 0;
}
