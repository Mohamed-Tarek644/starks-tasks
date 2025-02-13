#include <stdio.h>
#include <stdlib.h>

void fun(char *arr)
{
    int vowel_count = 0, consonant_count = 0;
    int i = 0;


    while (arr[i] != '\0')
    {
        char n = arr[i];


        if (n == 'a' || n == 'A' || n == 'e' || n == 'E' ||
                n == 'i' || n == 'I' || n == 'o' || n == 'O' ||
                n == 'u' || n == 'U')
        {
            vowel_count++;
        }

        else if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'))
        {
            consonant_count++;
        }

        i++;
    }

    printf("The number of vowels = %d\n", vowel_count);
    printf("The number of consonants = %d\n", consonant_count);
}

int main()
{
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);





    fun(str);

    return 0;
}
