#include <stdio.h>
#include <string.h>

int my_strcmp(char *str1, char *str2)
{
    for (; *str1 == *str2; str1++, str2++)
    {
        if(*str1 == '\0')
            return 0;
    }
    return (*str1 > *str2) ? 1 : -1;
}

int main(int argc, const char *argv[])
{
    char *str1 = "hello world!";
    char *str2 = "hello world";
    printf("%d\n", strcmp(str1, str2));
    printf("%d\n", my_strcmp(str1, str2));
    return 0;
}
