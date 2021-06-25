#include <stdio.h>



int es_digito(int n)
{
	if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'))
	{
		return (0);
	}
	else if (n >= 0 && n <= 9)
	{
		return (1);
	}
}
int menor(int fila, int columna)
{
	if (fila < columna)
	{
		return (fila);
	}
	else
	{
		return (columna);
	}
}

int formula(int n, int fila, int columna)
{
	int min;

	if (fila < columna)
	{
		min = fila;
	}
	else
	{
		min = columna;
	}
	printf("%d ", n - min + 1);

}


int main(void)
{

	int fila, columna, n;

	printf("The limit number: ");
	scanf("%d", &n);


	if (es_digito(n) == 1)
	{
	for (fila = 1 ; fila <= n ; fila++)
	{
		for (columna = 1 ; columna <= n ; columna++)
		{
			formula(n, fila, columna);
		}
		for (columna = n - 1 ; columna >= 1 ; columna--)
		{
			formula(n, fila, columna);
		}
		printf("\n");
	}

	for (fila = n - 1 ; fila >= 1 ; fila--)
	{
		for (columna = 1 ; columna <= n - 1 ; columna++)
		{
			formula(n, fila, columna);
		}
		for (columna = n ; columna >= 1; columna--)
		{
			formula(n, fila, columna);
		}
		printf("\n");
	}
	}
	else
	{
		printf("Solo se aceptan numeros entre 0-9\n");
	}
	return (0);
}
