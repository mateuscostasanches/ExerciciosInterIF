#include <bits/stdc++.h>

using namespace std;

int main(){

	int comprimento, altura, largura;
	int alturaDesejada;
	double valor1, valor2, valor3;
	
	cin >> comprimento >> altura >> largura;
	cin >> alturaDesejada;
	
	valor1 = (comprimento * altura * largura)/1000;
	valor2 = (comprimento * alturaDesejada * altura)/1000;	
	valor3 = valor1 * 0.15;
	
	printf("%.1fLTS\n", valor1);
	printf("%.1fKG\n", valor2);
	printf("%.1fML\n", valor3);
	
	return 0;
}
