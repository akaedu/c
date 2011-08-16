#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i, j, k;
    int count = 0;
    for (i = 0; i <= 4; i++) 
        for (j = 0; j <= 4; j++) 
            for (k = 0; k <= 4; k++) 
                if (i != j && i != k && j != k) 
                {
                    count++;
                    printf("%d%d%d\n", i, j, k);
                }
    printf("\ncount = %d\n", count);
    return 0;
}
