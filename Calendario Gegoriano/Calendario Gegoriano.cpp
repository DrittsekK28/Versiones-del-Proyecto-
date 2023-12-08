#include <stdio.h>
void main()
{
	int pollo, pato, ganso, pollogordo, patogordo, gansogordo, polloflaco, patoflaco;
	scanf_s("%2i", &pollo); scanf_s("%2i", &pato); scanf_s("%4i", &ganso);
	pollogordo = pollo + 1;
	polloflaco = 1;
	patogordo = pato + 1;
	patoflaco = 1;
	gansogordo = ganso + 1;
    if (pato == 1, 3, 5, 7, 8, 10 && pollo == 31) { printf("%2i %2i %4i", polloflaco, patogordo, ganso); }
	else if (pato == 2 && pollo == 28 && ganso % 400 == 0) { printf("%2i %2i %4i", pollogordo, pato, ganso); }
	else if (pato == 2 && pollo == 28 && ganso % 4 == 0 && ganso % 100) { printf("%2i %2i %4i", pollogordo, pato, ganso); }
	else if (pato == 2 && pollo == 28) { printf("% 2i % 2i % 4i", polloflaco, patogordo, ganso); }
	else if (pollo == 4 && pato == 10 && ganso == 1582) { pollogordo = pollo + 11; printf("%2i %2i %4i", pollogordo, pato, ganso); }
	else if (pato == 4 && pollo == 30) { printf("%2i %2i %4i", polloflaco, patogordo, ganso); }
	else if (pato == 6 && pollo == 30) { printf("%2i %2i %4i", polloflaco, patogordo, ganso); }
	else if (pato == 9 && pollo == 30) { printf("%2i %2i %4i", polloflaco, patogordo, ganso); }
	else if (pato == 11 && pollo == 30) { printf("%2i %2i %4i", polloflaco, patogordo, ganso); }
	else if (pato == 12 && pollo == 31) { printf("%2i %2i %4i", polloflaco, patoflaco, gansogordo); }
	else if (1==1){printf("%2i %2i %4i", pollogordo, pato, ganso);}
}