#include <stdio.h>
#include <stdlib.h>
void sort(int *sor,int c)
{
    int swap;
    for(int i=0; i<c-1; i++)
    {
        for(int j=0; j<c-i-1; j++)
        {
            if(*(sor +j)>*(sor+j+1))
            {
                swap=*(sor+j);
                *(sor+j)=*(sor+j+1);
                *(sor +j +1)=swap;
            }
        }

    }




}



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
	printf("array after sorting\n");
    sort(arr,n);
    for(int i=0; i<n; i++)
    {
        printf("the %d element:%d\n",i+1,arr[i]);
    }


    return 0;
}
