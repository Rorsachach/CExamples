#pragma once
#include <stdio.h>

void func() {
	printf("please input x and y: specified\n");
	float x, y;
	scanf("%f %f", &x, &y);
	printf("Max of (%f, %f) is %f", x, y, x > y ? x : y);
}