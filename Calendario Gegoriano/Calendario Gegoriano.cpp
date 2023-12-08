#include <stdio.h>
void main()
{
	int D, M, A, DS, MS, AS, DA, MA;
	scanf_s("%2i", &D); scanf_s("%2i", &M); scanf_s("%4i", &A);
	DS = D + 1;
	DA = 1;
	MS = M + 1;
	MA = 1;
	AS = A + 1;
    if (D == 4 && M == 10 && A == 1582) { DS = D + 11; printf("%2i %2i %4i", DS, M, A); }
	else if (M == 1, 3, 5, 7, 8, 10 && D==31) { printf("%2i %2i %4i", DA, MS, A); }
	else if (M == 12 && D == 31) { printf("2%i 2%i 4%i",DA,MA,A); }
	else if (1==1){printf("%2i %2i %4i", DS, M, A);}
}