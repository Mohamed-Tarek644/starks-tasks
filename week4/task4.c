#include <stdio.h>
#include <stdlib.h>

int main()
{
  int arr[10],sum=0,product=1;
  printf("enter the elements:");
  for(int i=0;i<10;i++)
    scanf("%d",&arr[i]);
  printf("the array is:");
  for(int i=0;i<10;i++)
    printf("%d ",arr[i]);

  for(int i=0;i<10;i++){
    if(arr[i]%2==0)
        sum+=arr[i];
    else
        product *=arr[i];

  }
  printf("\n the sum of even numbers is %d\n",sum);
  printf("the product of odd numbers is %d\n",product);


    return 0;
}
