#include <iostream>

using namespace std;

int verificarNumerosPrimos(int NumeroPessoas)
{
	for (int i = 2; i*i <= NumeroPessoas; i++){
		if (NumeroPessoas % i == 0) return false;
	}	
	return true;
}

int main()
{
	int NumeroPessoas, contador = 0;
	
	cin >> NumeroPessoas;
	
	for(int i = 2; i <= NumeroPessoas; i++){
		if (verificarNumerosPrimos(i)){
			contador++;
		}
	}
	
	cout << contador << endl;
}
