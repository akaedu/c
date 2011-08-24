#include <stdio.h>
#include <string.h>

char * mystrstr(char *str, char *substr)
{
    while(*str)
    {
        if(strncmp(str, substr, strlen(substr)) == 0)
            return str;
        str++;
    }
    return NULL;
}

int main(int argc, const char *argv[])
{
    char *str = "hello world!";
    char *substr = "or";
    printf("%s\n", mystrstr(str, substr));
    return 0;
}
