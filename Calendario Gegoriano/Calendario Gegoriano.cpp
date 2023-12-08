#include <stdio.h>
int main()
{
	int D, M, A, DS, MS, AS, DI, MI;
	scanf_s("%2i", &D); scanf_s("%2i", &M); scanf_s("%4i", &A);
	DS = D + 1;
	DI = 1;
	MS = M + 1;
	MI = 1;
	AS = A + 1;
	if (M == 1, 3, 5, 7, 8, 10 && D <= 31) { printf("%2i %2i %4i", DI, MS, A); } 
    else if (M == 2 && D == 28 && A % 400 == 0) { printf("%2i %2i %4i", DS, M, A); }
	else if (M == 2 && D == 28 && A % 4 == 0 && A % 100) { printf("%2i %2i %4i", DS, M, A); }
	else if (M == 2 && D == 28) { printf("% 2i % 2i % 4i", DI, MS, A); }
	else if (D == 4 && M == 10 && A == 1582) { DS = D + 11; printf("%2i %2i %4i", DS, M, A); }
	else if (M == 4 && D <= 30) { printf("%2i %2i %4i", DI, MS, A); }
	else if (M == 6 && D <= 30) { printf("%2i %2i %4i", DI, MS, A); }
	else if (M == 9 && D <= 30) { printf("%2i %2i %4i", DI, MS, A); }
	else if (M == 11 && D <= 30) { printf("%2i %2i %4i", DI, MS, A); }
	else if (M == 12 && D == 31) { printf("%2i %2i %4i", DI, MI, AS); }
	else if (D <= 31) { printf("%2i %2i %4i", DS, M, A); }
}