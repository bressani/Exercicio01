#include "stdafx.h"
#include "Funcoes.h"
float fatorial(int n){
	float fact = 1;
	for (int i = 1; i <= n; i++)
	{
		fact = fact *i;

	}
	return fact;
}
float euler(){
	float resp = 0;
	for (int i = 0; i <15; i++)
	{
		resp = resp + (1 / fatorial(i));
	}
	return resp;
}
float euler2(int x) {
	float resp = 0;
	for (int i = 1; i <= 15; i++)
	{
		resp = resp + (expo(x, i) / fatorial(i - 1));
	}
	return resp;

}
float expo(float a, int b){
	int resp = 1;
	for (int i = 1; i <= b; i++)
	{
		resp = resp*a;
	}
	return resp;
}