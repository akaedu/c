---
layout: post
title: 练习题
---
##练习题
####1.
看下面的程序：<br>

        #include <stdio.h>

        int main(void)
        {
                int i;
                char str[6] = "hello";
                char reverse_str[6] = "";

                printf("%s\n", str);
                for (i = 0; i < 5; i++)
                        reverse_str[5-i] = str[i];
                printf("%s\n", reverse_str);

                return 0;
        } 

首先用字符串"hello"初始化一个字符数组str（算上'\0'共6个字符）。然后用空字符串""初始化一个同样长的字符数组reverse_str，相当于所有元素用'\0'初始化。然后打印str，把str倒序存入reverse_str，再打印reverse_str。然而结果并不正确：
####2.

####3.

####4.

####5.

####6.

####7.

