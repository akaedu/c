#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char *argv[])
{
    int num[15], i, j;

    srand(time(NULL));
    for(i = 0; i < 15;)
    {
        num[i] = rand()%20;
        for(j = 0; j < i; j++)
            if(num[i] == num[j])
                break;

        if(j == i)
            i++;

    }

    for(i = 0; i < 15; i++)
        printf("%d,", num[i]);

    printf("\n");

    return 0;
}
