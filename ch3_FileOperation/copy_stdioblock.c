#include <stdio.h>
#include <stdlib.h>

int main() {
	char block[1024];
	int nread;
	FILE *in, *out;

	in = fopen("file.in", "r");
	out = fopen("file.out", "w");
	while((nread = fread(block, sizeof(block), 1, in)) > 0)		// read return 0 at the end of the file
		fwrite(block, sizeof(block), 1, out);
}
