#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[50],x;
    int count;

    printf("enter the string: ");
    fgets(arr,sizeof(arr),stdin);


    printf("enter the character:");

    scanf("%c",&x);



    for(int i=0;i<50;i++){
        if(arr[i]==x){
            count++;
        }
    }
    printf("the frequency of %c is %d",x,count);



    return 0;
}
