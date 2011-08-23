#include <stdio.h>
#include <string.h>

int parse(char *str, char *substr)
{
    int count = 0;
    char *tmp;
    while(*str)
    {
        if(tmp = strstr(str, substr))
        {
            count++;
            str = tmp + strlen(substr);
        }
        else
            break;
    }
    return count;
}

int main(int argc, const char *argv[])
{
    char str[100];
    char substr[20];

    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0';

    printf("Enter a substring: ");
    fgets(substr, 20, stdin);
    substr[strlen(substr) - 1] = '\0';

    printf("%d %s in %s.\n", parse(str, substr), substr, str);
    return 0;
}
