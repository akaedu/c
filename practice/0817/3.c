#include <stdio.h>

int calc(int x)
{
    int count = 0;
    while(x)
    {
        if (x & 0x01)//判断最后一位是否为1 
            count++;
        x >>= 1; //same as x /= 2;
    }
    return count;
}

int main(int argc, const char *argv[])
{
    int x;
    printf("Input an integer: ");
    scanf("%d", &x);
    printf("%d one exists in %d", calc(x), x);
    return 0;
}
