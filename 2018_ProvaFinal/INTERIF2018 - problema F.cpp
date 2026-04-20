#include <iostream>
#include <cmath>

using namespace std;

int obter_raiz_quadrada(int tamanho_frase)
{
	int resultado;
	resultado = sqrt(tamanho_frase);
	return resultado;
}

int obter_tamanho_frase(string frase)
{
	int tamanho;
	tamanho = frase.length();
	return tamanho;
}

int main()
{
	int tamanho, valor;
	string frase, decodificada;
	char caractere;
	
	cin >> frase;
	tamanho = obter_tamanho_frase(frase);
	valor = obter_raiz_quadrada(tamanho);
	
	for(int i = 0; i < valor; i++)
	{
		caractere = i * (valor + 1); 
		decodificada += frase[caractere];
	}

	if((valor * valor) == tamanho)
	{
		cout << decodificada << endl;
	}
	else
	{
		cout << "invalido\n";
	}
	return 0;
}
