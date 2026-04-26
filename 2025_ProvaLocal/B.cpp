// Problema B 

#include <iostream> 

using namespace std; 

int main() 
{ 
	string entrada; 
	int contMax = 0, contAtual = 1; 
	
	// Leitura inicial 
	cin >> entrada; 
	
	// Lógica principal algoritmo 
	for(int i = 1; i < entrada.size(); i++) 
	{ 
		if((entrada[i] == 'A') && (entrada[i-1] != entrada[i])) 
		{ 
			contAtual++; 
		} 
		else if((entrada[i] == 'B') && (entrada[i-1] != entrada[i])) 
		{ 
			contAtual++; 
		} 
		else if(entrada[i] == entrada[i-1]) 
		{ 
			contAtual = 1; 
		} 
		
		if(contAtual > contMax) 
		{ 
			contMax = contAtual;
		} 
	} 
	
	// Impressao final
	cout << contMax << endl; 
	
	return 0; 
}
