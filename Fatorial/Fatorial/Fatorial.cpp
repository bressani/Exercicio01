// Fatorial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Funcoes.h"

int _tmain(int argc, _TCHAR* argv[])
{
	float a = fatorial(4);
	printf("Fatorial: %f", a);
	float b = euler();
	printf("\nEuler: %f", b);
	float c = euler2(2);
	printf("\nEuler 2: %f", c);
	float d = expo(4, 3);
	printf("\nExpo: %f", d);
	printf("\n\n");
	return 0;
}

