#include <stdio.h>
#include <stdlib.h>




int main()
{
    int arr[50],n;
    printf("enter the number of elements:");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("the %d element : %d\n",i+1,arr[i]);
    }
    printf("array after reversing\n");

    for(int i=n-1; i>=0; i--)
    {
        printf("the element is :%d\n",arr[i]);
    }


    return 0;
}
