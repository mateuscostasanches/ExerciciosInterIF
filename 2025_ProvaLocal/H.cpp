// problema H

#include <iostream>

using namespace std;

int main()
{
	// Leitura inicial
	int linhas, colunas, numCasas, x0, y0, x1, y1, d, dist, soma, x, y;
	bool flag = false;
	cin >> linhas >> colunas >> x0 >> y0 >> d;
	cin >> numCasas;
	
	// Logica principal algoritmo
	for(int i = 0; i < numCasas; i++)
	{
		cin >> x1 >> y1;
		
		x = (x1-x0)*(x1-x0);
		y = (y1-y0)*(y1-y0);
		dist = x+y;
		
		if(dist <= (d*d))
		{
			flag = true;
			break;
		}
	}
	
	// Impressao final
	if(!flag)
	{
		cout << "Uma casinha no meio do nada\n";
	}
	else
	{
		cout << "Uma casinha no meio de todas\n";
	} 
	return 0;
}
