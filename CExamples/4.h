#pragma once
#include <stdio.h>
void func(){
	char c1, c2, c3;
	printf("Please input chars to c1,c2,c3:\n");
	scanf("%c%c%c", &c1, &c2, &c3);
	printf("%s\n%c%c%c\n", "The output is:", c1, c2, c3, c1, c2, c3);
}