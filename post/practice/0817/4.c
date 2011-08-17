#include <stdio.h>
#include <string.h>

int parse(char *s, char c)
{
    int count = 0;
    while(*s)//字符串以‘\0’结束，其ASCII码为0，当到末尾时条件为假推出循环。
    {
        if (*s++ == c) 
            count++;
    }
    return count;
}

int main(int argc, const char *argv[])
{
    char str[100];
    char c;
    printf("Please input a string ");
    fgets(str, 100, stdin);//gets函数不推荐使用，不能指定大小，容易越界，scanf 不能接收空格。
    str[strlen(str) - 1] = '\0';//fgets函数将会接受最后输入的回车符，去掉
    printf("Please input the char to count: ");
    scanf("%c", &c);

    printf("%d %c exists in %s\n", parse(str, c), c, str);
    return 0;
}
