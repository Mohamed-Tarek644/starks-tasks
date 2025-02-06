#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter the number of array:");
    int n;
    int check=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the unique elements are \n");
        for(int i=0;i<n;i++){
                check=0;
            for(int j=0;j<n;j++){
                    if( i!=j && arr[i]==arr[j])
                        check++;





            }
        if(check==0)
            printf("%d ",arr[i]);

        }









    return 0;
}
