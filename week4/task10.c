#include <stdio.h>
#include <stdlib.h>

int main()
{int check=0;

    char str1[50],str2[50];
    printf("enter the first string:");
    scanf("%s",str1);
     printf("enter the second string:");
    scanf("%s",str2);
    printf("first string: %s\n",str1);
    printf("second string: %s\n",str2);
    for(int i=0;i<50;i++){
        if(str1[i]!=str2[i]){
            check=1;
            break;
        }
        if (str1[i] == '\0' && str2[i] == '\0') {
            break;
        }


    }
    printf("-------------------------------------------------------------------------------------\n");
    if(check==0)
        printf("strings are equal\n");
    else
        printf("strings are not  equal\n");
        printf("-------------------------------------------------------------------------------------\n");





    return 0;
}








