#include <stdio.h>

int calc(char *str)
{
        int max = 0, tmp = 0;
        while(*str)
        {
                if(*str == ' ')
                {
                        if(tmp > max)
                                max = tmp;
                        tmp = 0;
                }
                else
                        tmp++;
                str++;
        }
        if(tmp > max)
                max = tmp;
        return max;
}

int main(int argc, const char *argv[])
{
        printf("%d\n", calc("hello everyone"));
        return 0;
}
