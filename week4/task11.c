#include <stdio.h>
#include <stdlib.h>

int main()
{
    int index=0;

    char str1[50],str2[50];
    printf("enter the first string:");
    fgets(str1,sizeof(str1),stdin);
     printf("enter the second string:");
    fgets(str2,sizeof(str2),stdin);

    printf("first string: %s\n",str1);
    printf("second string: %s\n",str2);
    char str3[100];
    for(int i=0;str1[i]!='\0';i++){
        str3[index]=str1[i];
        index++;
    }
    for(int i=0;str2[i]!='\0';i++){
        str3[index]=str2[i];
        index++;
    }
    str3[index]='\0';
    printf(" the string after concentation :%s",str3);

}








