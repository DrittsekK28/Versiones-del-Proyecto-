#include <stdio.h>
void main()
{
	int D, M, A, DS;
	scanf_s("%2i", &D); scanf_s("%2i", &M); scanf_s("%4i", &A);
	DS = D + 1;
	printf("%2i %2i %4i", DS, M, A);
}