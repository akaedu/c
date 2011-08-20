#include <stdio.h>

char *mystrcpy(char *dest, char *src)
{
    char *bak = dest;
    while(*dest++ = *src++);
    return bak;
}

int main(int argc, const char *argv[])
{
    char src[20] = "Hello world!";
    char dest[20];
    mystrcpy(dest, src);
    printf("%s\n", dest);

    return 0;
}
