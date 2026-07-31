#include <unistd.h>
#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <stdlib.h>

void printdir(char *dir, int depth) {
	DIR *dp;
	struct dirent *entry;
	struct stat statbuf;

	if((dp = opendir(dir)) == NULL){
		fprintf(stderr, "cannot open directory: %s\n", dir);
		return;
	}

	chdir(dir);
	while((entry = readdir(dp)) != NULL) {
		lstat(entry->d_name, &statbuf);
	}
}
