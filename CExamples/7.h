#pragma once
#include <stdio.h>

void func() {
	printf("this program will print the sum of [0, x]\n");
	printf("please input x\n");
	int x;
	scanf("%d", &x);

	printf("result: %d", sum(x));
}

int sum(int x) {
	if (x == 0)
		return x;
	else 
		return sum(x - 1) + x;
}