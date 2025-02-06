#include <stdio.h>
#include <stdlib.h>

int main()
{
 int r1,c1,r2,c2;
 printf("enter the number of rows of matrix 1 :");
     scanf("%d",&r1);
     printf("enter the number of cols of matrix 1 :");
         scanf("%d",&c1);
         printf("enter the number of rows of matrix 2 :");
             scanf("%d",&r2);
             printf("enter the number of cols of matrix 2 :");
                 scanf("%d",&c2);
                 if(c1!=r2)
                    printf("it can not multipicate\n");
                 int arr1[r1][c1],arr2[r2][c2],result[r1][c2];
                 printf("enter the elements of first elements:");
                 for(int i=0;i<r1;i++){
                    for(int j=0;j<c1;j++){
                        scanf("%d",&arr1[i][j]);
                    }

                 }
                 printf("enter the elements of second elements:");
                 for(int i=0;i<r2;i++){
                    for(int j=0;j<c2;j++){
                        scanf("%d",&arr2[i][j]);
                    }

                 }
                 for(int i=0;i<r1;i++){
                    for(int j=0;j<c2;j++){
                      for(int k=0;k<c1;k++){
                        result[i][j]+=arr1[i][k]*arr2[k][j];
                      }
                    }
                 }
             printf("the result array is \n");
             for(int i=0;i<r1;i++){
                for(int j=0;j<c2;j++){
                    printf("%d ",result[i][j]);
                }
                printf("\n");
             }







    return 0;
}
