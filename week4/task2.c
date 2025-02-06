
#include <stdio.h>
#include <stdlib.h>



int main()
{int sumROW,sumCol;
   int arr[5][5];
   for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        scanf("%d",&arr[i][j]);
    }
   }
   for(int i=0;i<5;i++){
        printf("row%d:",i);
    for(int j=0;j<5;j++){
        printf("%d ",arr[i][j]);
    }
   printf("\n");


   }
   printf("\n------------------------------------------\n");
   printf("row total:  ");
   for(int i=0;i<5;i++){
        sumROW=0;

    for(int j=0;j<5;j++){
            sumROW+=arr[i][j];


    }
    printf("%d ",sumROW);
   }
   printf("\n------------------------------------------\n");
   printf(" columns total : ");
    for(int i=0;i<5;i++){


        sumCol=0;

    for(int j=0;j<5;j++){
            sumCol+=arr[j][i];


    }
    printf("%d ",sumCol);
         }










    return 0;
}
