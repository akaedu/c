#include <stdio.h>

int find_second(int *a, int size)
{
        int max, second, i;
        max = 0;
        second = 0;
        for(i = 0; i < size; i++)
        {
                if(a[i] > max)
                {
                        max = a[i];
                }
                else if(a[i] > second)
                        second = a[i];
        }
        return second;
}

int main(int argc, const char *argv[])
{
        int a[] = {143, 42, 54, -78, 31, 42, 83, 122, 57, -20};
        printf("%d\n", find_second(a, sizeof(a) / sizeof(int)));
        return 0;
}
