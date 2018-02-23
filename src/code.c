#include "somecode.h"

int main(int argc, char** argv)
{
	printf("called with %d arguments\n", argc);
	printf("hash of first argument: %d\n", hash(argv[0]));
	return 0;
}



int hash(char* str)
{
	int h;
	for (char* p=str; *p; p++) {
		h += p;
	}
	return h;
}
