#include <stdio.h>

main()
{
	int x, soma;
	soma = 0;
	for (x=1; x<=100; x++)
	{
		soma = soma + x;
	}
	printf("%i \n", soma);
}

