// Losango.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	printf("Digite o tamanho do losango: \n");
	int num = 0;
	scanf_s("%i", &num);

	for (int i = 0; i < num; i = i + 2) {
		for (int k = num - i - 1; k > 0; k = k - 2) {
			printf(" ");
		}
		for (int j = 1; j <= i + 1; j++) {

			printf("*");
		}
		printf("\n");

	}
	for (int i = 0; i < num; i = i + 2) {
		for (int j = 0; j < i + 1; j = j + 2) {
			printf(" ");
		}
		for (int j = num - 3; j >= i; j--) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

