#include <stdio.h>

int main(int argc, char *argv[])
{
	char str1[] = "hello";
	char str2[] = "akaedu";
	char str[32] = {0};
	int i=0, j=0, k=0;

	while(str1[i] && str2[j])
	{
	
			if(str1[i] < str2[j])
				str[k++] = str1[i++];
			else
				str[k++] = str2[j++];
	}

	while(str1[i])
		str[k++] = str1[i++];
	while(str2[j])
		str[k++] = str2[j++];

	str[k] = '\0';
	
	printf("str1 = %s\nstr2 = %s\nafter...\nstr = %s\n", str1, str2, str);

	return 0;
}
