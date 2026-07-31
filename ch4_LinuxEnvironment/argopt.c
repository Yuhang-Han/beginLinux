#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int opt;
	while((opt = getopt(argc, argv, ":if:lr")) != -1) {
	// 第三个参数表述选项结构:
	// 有i, f, l, r 这些选项, 其中f 后跟随一个关联参数
	// 开头的: 表示关联参数为空时返回':'
		switch(opt) {
		case 'i':
		case 'l':
		case 'r':
			printf("option: %c\n", opt);
			break;
		case 'f':
			printf("filename: %s\n", optarg);
			break;
		case ':':
			printf("option needs a value\n");
			break;
		case '?':
			printf("unknown option: %c\n", optopt);
			break;
		}
	}
	printf("optind: %d\n", optind);
	// getopt() 其实重排了参数数组, 把非选项参数放在最后
	for(; optind < argc; optind++)
		printf("argument: %s\n", argv[optind]);
}
