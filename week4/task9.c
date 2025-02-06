#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[50];


    printf("enter the string: ");
    fgets(arr,sizeof(arr),stdin);
    
    for(int i=0; i<50; i++)
    {
        if(arr[i]==' ')
        {
            arr[i]='*';
        }
    }
    printf("%s",arr);




    return 0;
}








