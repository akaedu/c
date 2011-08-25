#include <stdio.h>
#include <string.h>

int my_strcmp(char *s1, char *s2)
{

        for (; (*s1 == *s2); s1++, s2++)
        {
                
                if (*s1 == '\0')
                        return 0;
        }
        return (*s1 > *s2 ? 1 : -1); 
}

int my_strncmp(char *s1, char *s2, int n)
{
        if(!n)
               return 0;
        while(--n && *s1 && *s1 == *s2)
        {
                s1++;
                s2++;
        }
        return (*s1 > *s2 ? 1 : -1); 

}
int main(int argc, const char *argv[])
{
        char *p = "hello", *q = "akadeu", *str = "helaka";
        printf("strncmp = %d\n", strncmp(p, str,0));
        printf("my_strncmp = %d\n", my_strncmp(p, str, 0));
	return 0;
}
