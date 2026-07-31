#include <fcntl.h>

int main() {
	open("myfile", O_CREAT, S_IRUSR|S_IXOTH);
}
