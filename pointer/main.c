#define _CRT_SECURE_NO_WARNINGS	
#include <stdarg.h>


void b(int* p) {
	*p = 100;
}

void main() {
	//������(�ּ�)
	int h;
	b(&h);
	printf("h:%d\n", h);
}