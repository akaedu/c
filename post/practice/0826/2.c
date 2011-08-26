#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 10

void init(int num[], int len)
{
        int i;
        srand(time(NULL));

        for (i = 0; i < len; i++)
        {
                num[i] = rand() % 100;        
        }
}

void show(int num[], int len)
{
        int i;

        for (i = 0; i < len; i++)
        {
        
                printf("%d ", num[i]);
        }
        printf("\n");
}

void sort(int num[], int len)
{
        int i, j, pos, tmp;
        
        for (i = 0; i < len - 1; i++)
        {
                pos = i;
                for (j = i + 1; j < len; j++)
                {
                
                        if (num[pos] > num[j])
                                pos = j;
                }
                if (pos != i)
                {
                        tmp = num[pos];
                        num[pos] = num[i];
                        num[i] = tmp;
                }
        }
}

void reverse(int num[], int start, int len)
{
        int i, j, end = start + len - 1, tmp;

        for (i = start, j = end; i <= j; i++, j--)
        {
                tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
        }

}

int main(int argc, const char *argv[])
{
        int arr[N];

        init(arr, N);
        show(arr, N);
        
        sort(arr, N);
        show(arr, N);
        
        reverse(arr, 1, 4);
        show(arr, N);
        return 0;
}
