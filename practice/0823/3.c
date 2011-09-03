#include <stdio.h>
#include <string.h>

int divide(char *str, char *store[])
{
    int i = 0;
    store[i++] = str;
    while(*str)    
    {
        if (*str == ' ') 
        {
            *str = '\0';
            store[i++] = str + 1;
        }
        str++;
    }
    return i;
}

int main(int argc, const char *argv[])
{
    char str[100];
    char *store[10];
    int num, i;
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0';
    num = divide(str, store);

    for (i = 0; i < num; i++) 
    {
        printf("%s\n", store[i]);
    }
    return 0;
}
