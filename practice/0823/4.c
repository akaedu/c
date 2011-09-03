#include <stdio.h>

int myatoi(char *str)
{
    int flag = 0;
    int num = 0;
    if (*str == '-') 
    {
        flag = 1;
        str++;
    }
    while(*str)
    {
        num *= 10;
        num += *str++ - '0';
    }
    if(flag)
        num = -num;
    return num;
}

int main(int argc, const char *argv[])
{
    char buf[100];
    scanf("%s", buf); 
    printf("%d\n", myatoi(buf));
    return 0;
}
