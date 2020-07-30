#pragma once
#include <stdio.h>

void func() {
	printf("***Pithy Formula Table of Multiplication***");
	for (int i = 0; i < 10; i++) {
		printf("\n\t");
		for (int j = 0; j < 10; j++) {
			if (i == 0) {
				if (j == 0)
					printf("  ");
				else
				{
					printf(" %2d", j);
				}
			}
			else
			{
				if (j == 0)
					printf(" %d",i);
				else
				{
					printf(" %2d", i*j);
				}
			}
		}
	}
}