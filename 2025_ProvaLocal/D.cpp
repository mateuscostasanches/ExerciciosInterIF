// Problema D

#include <iostream>

using namespace std;

int main()
{
	// leitura inicial
	int peso1, peso2, peso3;
	cin >> peso1 >> peso2;
	
	// Logica algoritmo
	if(peso1 == peso2)
	{
		peso3 = peso1;
	} 
	else
	{
		if(peso1 > peso2)
		{
			peso3 = peso1;
		}
		else
		{
			peso3 = peso2;
		}
	}
	
	// Impressao final
	cout << peso3 << endl;
	
	return 0;	
}
