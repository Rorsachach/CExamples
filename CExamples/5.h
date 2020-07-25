#pragma once
#include <stdio.h>

void func() {
	printf("The bytes of the variables are:\n");
	printf("int:%d bytes\n", sizeof(int));
	printf("char:%d byte\n", sizeof(char));
	printf("short:%d bytes\n", sizeof(short));
	printf("long:%d bytes\n", sizeof(long));
	printf("float:%d bytes\n", sizeof(float));
	printf("double:%d bytes\n", sizeof(double));
	printf("long double:%d bytes\n", sizeof(long double));
}