#define _CRT_SECURE_NO_WARNINGS	
#include <stdarg.h>


void b(int* p) {
	*p = 100;
}

void main() {
	//포인터(주소)
	int h;
	b(&h);
	printf("h:%d\n", h);
}