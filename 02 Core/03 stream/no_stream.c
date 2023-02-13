#include <stdio.h>
#include <string.h>

int main() {
	char filename[] = "00205.txt.jpg";
	char *pch;
	pch = strtok(filename, ".");
	printf("%s\n", pch);

	while( pch != NULL )
	{
		printf("%s\n", pch);
		pch = strtok(NULL, "."); // next block , nothing input
	}
	
	return 0;
}

