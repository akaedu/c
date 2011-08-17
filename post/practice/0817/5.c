#include <stdio.h>
#include <string.h>

void itoa(int x, char *p)
{
    int i = 0, j = 0;
    int tmp;
    while(x)
    {
        p[i++] = x % 10 + '0';
        x /= 10;
    }
    p[i] = '\0';
    for (i = 0, j = strlen(p) - 1; i <= j; i++, j--) 
    {
        tmp = p[i];
        p[i] = p[j];
        p[j] = tmp;
    }
}

int main(int argc, const char *argv[])
{
    int x;
    char str[100];
    printf("Please input an integer: ");    
    scanf("%d", &x);
    itoa(x, str);
    printf("After convert, array str is %s\n", str);
    return 0;
}
