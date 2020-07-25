#pragma once
#include <stdio.h>

void func() {
	printf("please input x and y\n");
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d + %d = %d", x, y, x * y);
}