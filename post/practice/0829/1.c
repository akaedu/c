#include <stdio.h>

int find_x(int num, int x)
{
        int count = 0;
        if(x != 0)
        {
                do{
                        if(num % x == 0)
                                count++;
                }while(num /= 10);
        }
        else
        {
                do{
                        if(num % 10 == 0)
                                count++;
                }while(num /= 10);
        }
        return count;
}

int main(int argc, const char *argv[])
{
        int count = 0, i;
        for(i = 1; i <= 100; i++)
                count += find_x(i, 0);
        printf("%d\n", count);
        return 0;
}
