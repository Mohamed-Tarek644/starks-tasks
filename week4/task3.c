#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,arr[20],pos,i,small;
    printf("enter the number of array:");

    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the array is :");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    small=arr[0];
    pos=0;
    for(i=1;i<n;i++){
        if(arr[i] < small){
            small=arr[i];
            pos=i;
        }
    }
    printf("\nthe smallest number is %d\n",small);
    printf("the postion of smallest number is %d\n",pos);
     small=arr[0];
    pos=0;
    for(i=1;i<n;i++){
        if(arr[i] > small){
            small=arr[i];
            pos=i;
        }
    }
    printf("the biggst number is %d\n",small);
    printf("the postion of biggest number is %d\n",pos);


    return 0;
}