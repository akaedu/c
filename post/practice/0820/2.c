#include <stdio.h>

int convert(int *buf, int num)
{
    int i = 0;
    while(num)
    {
        buf[i++] = num % 2;
        num /= 2;
    }
    return i - 1;
}

int main(int argc, const char *argv[])
{
    int b[32] = {0};
    int num;
    int wei;
    printf("Please enter the number to convert: ");
    scanf("%d", &num);
    wei = convert(b, num);
    while(wei >= 0)
    {
        printf("%d", b[wei--]);
    }
    return 0;
}
