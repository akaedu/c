#include <stdio.h>
#include <string.h>

char *my_strcat(char *dest, const char *src)
{
	char *cp = dest;

	while (*cp)
		cp++;
	for (; (*cp = *src); cp++, src++)
		;
	return dest;
}


int main(int argc, char *argv[])
{
	const char src[16] = "akaedu";
	char dest[32] = "hello";

	//printf("after strcat src= %s\n", strcat(dest, src));
	printf("after my_strcat src= %s\n", my_strcat(dest, src));


	return 0;
}
