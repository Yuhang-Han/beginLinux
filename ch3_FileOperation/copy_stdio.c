#include <stdio.h>
#include <stdlib.h>

int main() {
	int c;
	FILE *in, *out;

	in = fopen("file.in", "r");
	out = fopen("file.out", "w");
	while((c = fgetc(in)) != EOF)		// read return 0 at the end of the file
		fputc(c,out);
}
