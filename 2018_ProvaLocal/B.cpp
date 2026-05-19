#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int valores[] = {4, 5, 6, 7, 11, 12, 13, 1, 2, 3};
	vector<int> cartas(valores, valores + 10);
	int n;
	
	cin >> n;
	
	if(n == 3)
	{
		cout << "0\n";
	} else {
		bool imprimir = false;
		for(int i = 0; i < cartas.size(); i++)
		{
			if(imprimir)
			{
				cout << cartas[i] << "\n";
			}
			
			if(cartas[i] == n) imprimir = true;
		}
	}
	
	return 0;
}
