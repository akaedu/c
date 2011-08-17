#include <stdio.h>
#include <string.h>

char A_to_a(char a)
{
    if (a >= 'A' && a <= 'Z') 
        return a + 32;
    else  
        return a;
}

int main(int argc, const char *argv[])
{
    printf("%c\n", A_to_a('D'));
    return 0;
}
