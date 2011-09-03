#include <stdio.h>


int main(int argc, const char *argv[])
{
    char str[100];
    char *p = str;
    char letter[26] = {0};
    char c;
    int i;
    int pos = 0, max = 0;
    printf("please enter a string: ");
    scanf("%s", str);
    while(*p)
    {
        c = toupper(*p);
        letter[c - 65]++;
        p++;
    }
    for (i = 0; i < 26; i++)
    {
        if(letter[i] > max)
        {
            pos = i;
            max = letter[i];
        }
    }
    for(i = 0; i < 26; i++)
    {
        if(max == letter[i])
            printf("%c appears %d times!\n", i + 65, max);
    }
    return 0;
}
