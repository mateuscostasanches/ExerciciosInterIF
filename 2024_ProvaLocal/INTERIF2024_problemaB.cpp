#include <iostream>
#include <string>

using namespace std;

void verificarAlternancia(string sequencia)
{
	string alternada = "";
	alternada += sequencia[0];
	
	for (int i = 1; i < sequencia.length(); i++)
	{
		if (sequencia[i] != sequencia[i-1])
		{
			alternada += sequencia[i];
		}
		else
		{
			break;
		}
	}
	
	cout << alternada.length() << endl;
}

int main()
{
	string sequencia;
	
	cin >> sequencia;
	
	verificarAlternancia(sequencia);
	
	return 0;
}
