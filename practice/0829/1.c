#include <stdio.h>

int find_x(int num, int x)
{
        int count = 0;

        do{
                if(num % 10 == x)
                        count++;
        }while(num /= 10);

        return count;
}

int main(int argc, const char *argv[])
{
        int count = 0, i;
        int x;
        printf("num to find: ");
        scanf("%d", &x);
        for(i = 1; i <= 100; i++)
        {
                count += find_x(i, x);
        }
        printf("%d\n", count);
        return 0;
}
