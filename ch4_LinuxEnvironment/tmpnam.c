#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char tmpname[L_tmpnam];
	char *filename;
	FILE *tmpfp;

	filename = tmpnam(tmpname);
	printf("Temporal file name is: %s\n", filename);

	tmpfp = tmpfile();
	if(tmpfp)
		printf("Opened a tempory file OK\n");
	else
		perror("tmpfile");
}
