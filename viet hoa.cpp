#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	for (int i = 0; i < strlen(argv); i++)
	{
		if ((isalpha) (argv[i]))
		{
			toupper(argv[i]);
		}
		printf("%s", argv[i]);
	}
}
