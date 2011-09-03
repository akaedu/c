#include <stdio.h>
#include <string.h>

#define LEN 128

int main(void)
{
	char *str1 = "1a2b";
	char *str2 = "3c4d";
	char str[LEN];
	char *start, *end, *p;


	fgets(str, LEN, stdin);
	start = end = str;

	do
	{
		start = strstr(start, str1);
		end = strstr(end, str2);

		if (!start || !end)
			break;
		if (end < start)
		{
			end = start + 1;
			continue;
		}
		for(p = start + 4; p < end; p++)
			printf("%c", *p);
		printf("\n");

		start = end = end + 1;
	} while(start < str + strlen(str));

	return 0;
}
