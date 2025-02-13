#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr;
    char alpha[]="abcdefghijklmnopqrstuvwxyz";
    ptr=alpha;
    while(*ptr !='\0'){
        printf("%c  ",*ptr);
        ptr++;
    }
    return 0;
}
