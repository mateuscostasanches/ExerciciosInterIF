#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void VerificarPontosNecessarios(int PontosDesejados, vector<int>& Pontos){
	
	int contadorPontos = 0, contadorPedras = 0;
	
	sort(Pontos.rbegin(), Pontos.rend());
	
	for (int i = 0; i < Pontos.size(); i++)
	{
		
		while (Pontos[i] <= (PontosDesejados - contadorPontos) && Pontos[i] > 0)
		{
			contadorPontos += Pontos[i];
			contadorPedras++;
			
			if (contadorPontos == PontosDesejados) break;
		}
	
	if (contadorPontos == PontosDesejados) break;
	}
	
	if (contadorPontos < PontosDesejados) 
	{
        cout << "frustraka" << endl;
    } 
	else 
	{
        cout << contadorPedras << endl;
    }
}

int main()
{	
	int QuantidadePedras, PontosDesejados;
	cin >> QuantidadePedras;
	
	vector<int> Pontos(QuantidadePedras);
	for (int i = 0; i < QuantidadePedras; i++)
	{
		cin >> Pontos[i];
	}
	
	cin >> PontosDesejados;
	
	VerificarPontosNecessarios(PontosDesejados, Pontos);
	return 0;
}
