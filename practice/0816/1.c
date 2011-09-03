#include <stdio.h>

int get_max(int a, int b, int c)
{
    if (a < b) //将a,b中最大的值给a 
        a = b;
    if (a > c) //若a比c大则a为最大的数
        return a;
    else
        return c;
}

int main(int argc, const char *argv[])
{
    int a, b, c;
    printf("Enter the age of three people: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("The max is %d\n", get_max(a, b, c));
    return 0;
}
