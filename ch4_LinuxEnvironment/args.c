#include <stdio.h>
#include <stdlib.h>

// 这里char *argv[] 是指针数组, 即指向字符指针的指针
// 可以当字符串数组用
int main(int argc, char *argv[]) {

	for(int arg = 0; arg < argc; ++arg) {
		if(argv[arg][0] == '-')
			printf("option: %s\n", argv[arg]+1);	// +1 将字符串起点后移1个
		else
			printf("argument %d: %s\n", arg, argv[arg]);
	}
	
}
